/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/19 17:37:40 by smlamali         ###   ########.fr       */
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
	std::list<unsigned int>::const_iterator lst;
	std::list<unsigned int>::const_iterator lsti = l.end();
	std::cout << " --- TAB OF SIZE : " << l.size() << " --- " << std::endl;
	for(lst = l.begin(); lst != lsti; lst++)
		std::cout << "[" << *lst << "]";
	std::cout << std::endl; 
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

void	Span::longestSpan(void) const
{
	
}