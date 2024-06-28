/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/28 17:39:13 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
	std::list<int>::const_iterator lst;
	std::list<int>::const_iterator lsti = l.end();

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
			l.push_back(nbr);
	}catch(std::exception & e)
	{ std::cout << e.what() << std::endl;}

}

unsigned int	Span::longestSpan(void) const
{
	try
	{
		if (l.size() < 2 || l.size() == 0)
			throw NotEnoughException();
		l.sort();
	}catch(std::exception & e)
	{ std::cout << e.what() << std::endl;}
	return (l.back() - l.front());
}

unsigned int	Span::shortestSpan(void) const
{
	int calc = l.back() - l.front();
	try
	{
		if (l.size() < 2 || l.size() == 0)
			throw NotEnoughException();

		int c;
		
		std::list<int>::const_iterator it = l.begin();
		std::list<int>::const_iterator ite = l.end();
		std::list<int>::const_iterator i;

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
				}
			}
		}
	}catch(std::exception & e)
	{std::cout << e.what() << std::endl;}
	return calc;
}

void	Span::addNumbers(size_t n, int nbr)
{
	(void)nbr;
	(void)n;
	// l.insert(l.end(), n, nbr);
	l.insert(l.end(), 5, 10);
// 	for (auto it = nlist.begin(); it != nlist.end(); it++)
// 		addNumber(*it);
}