/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/20 18:06:15 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <sys/types.h>

Span::Span(unsigned int N) : N(N)
{
	std::cout << "constructor Span called !" << std::endl;
}

Span::~Span()
{
	std::cout << "destructor Span called !" << std::endl;
}

Span::Span(const Span & s)
{
	std::cout << "copy constructor Span called !" << std::endl;
	*this = s;
}

Span & Span::operator=(const Span & s)
{
	N = s.getN();
	//recup liste :>
	return *this;
}

unsigned int Span::getN(void) const
{
	return N;
}

void	Span::printList(void) const
{
	std::list<unsigned int>::const_iterator lst;
	std::list<unsigned int>::const_iterator lsti = l.end();

	std::cout << " --- TAB --- " << std::endl;
	for(lst = l.begin(); lst != lsti; lst++)
		std::cout << "[" << *lst << "]";
	std::cout << std::endl; 
	std::cout << " ----------- " << std::endl;

}

void	Span::addNumber(int nbr)
{
	try
	{	
		if (l.size() >= N)
			throw TooMuchException();
		else
		{
			l.push_back(nbr);
			l.sort();
		}
	}catch(std::exception & e)
	{ std::cout << e.what() << std::endl;}

}

void	Span::longestSpan(void) const
{
	try
	{
		if (l.size() < 2 || l.size() == 0)
			throw NotEnoughException();
		std::cout << "longest span : ";
		std::cout << l.back() - l.front() << std::endl;
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Span::shortestSpan(void) const
{
	try
	{
		int c;
		int calc = l.back() - l.front();
		std::cout << "calc=" << calc << std::endl;
		std::list<unsigned int>::const_iterator it = l.begin();
		std::list<unsigned int>::const_iterator ite = l.end();
		std::list<unsigned int>::const_iterator i;

		if (l.size() < 2 || l.size() == 0)
			throw NotEnoughException();
		for (it = l.begin(); it != ite; it++)
		{
			for (i = l.begin(); i != ite; i++)
			{
				if (i != it)
				{
					c = *it - *i;
					if (c < 0)
						c *= - 1;
					if (c <= calc)
						calc = c;
					std::cout << "it= " << *it << " itnext=" <<  *i;
				std::cout << " calc=" << calc << std::endl;
				}
			}
		}
		std::cout << std::endl << "shortest span : " << calc << std::endl;
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}