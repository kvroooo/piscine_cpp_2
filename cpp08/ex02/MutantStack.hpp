/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:56:44 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/01 17:49:14 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <stack>

template<typename T> class MutantStack; 

template <typename T>
class MutantStack
{
private:
	std::stack<T> _s;
public:
	MutantStack<T>(){std::cout << "constructor called" << std::endl;};
	~MutantStack(){}
	MutantStack<T>(const MutantStack<T> & m);

	MutantStack<T> & operator=(const MutantStack<T> & m);

	T & 	top(void)const;
	bool	empty(void)const;
	size_t	size(void)const;
	void	push(const T & val);
	void	pop(void);
};

#include "MutantStack.tpp"