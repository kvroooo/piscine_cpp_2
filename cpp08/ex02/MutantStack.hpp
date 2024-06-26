/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:56:44 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/26 17:16:02 by smlamali         ###   ########.fr       */
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
	MutantStack<T>(){_s(new T);}
	~MutantStack(){delete _s;}
	MutantStack<T>(const MutantStack<T> & m)
	{
		delete _s;
		_s = new T;
	}

	MutantStack<T> & operator=(const MutantStack & m);

	T & 	top(void)const;
	bool	empty(void)const;
	size_t	size(void)const;
	void	push(const T & val);
	void	pop(void);
};

// #include "MutantStack.cpp.tpp"