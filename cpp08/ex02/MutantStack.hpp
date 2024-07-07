/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:56:44 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/07 13:58:35 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
public:
	MutantStack(){std::cout << "constructor called" << std::endl;}
	~MutantStack(){std::cout << "destructor called" << std::endl;}
	MutantStack(const MutantStack & m)
	{*this = m;};

	MutantStack<T> & operator=(const MutantStack<T> & m);

	typedef typename Container::iterator iterator; 
	
	iterator begin(){return this->c.begin();}
	iterator end(){return this->c.end();}
};
