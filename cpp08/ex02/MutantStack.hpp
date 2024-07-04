/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:56:44 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/04 19:06:50 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <stack>
#include <deque>

template<class T, class Container = std::deque<T>>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(){std::cout << "constructor called" << std::endl;}
	~MutantStack(){}
	MutantStack<T>(const MutantStack<T> & m)
	{*this = m;};

	MutantStack<T> & operator=(const MutantStack<T> & m);

	typedef typename std::stack<T>::container::iterator it; 
	
	// T & 	top(void)const;
	// bool	empty(void)const;
	// size_t	size(void)const;
	// void	push(const T & val);
	// void	pop(void);
};

#include "MutantStack.tpp"