/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/29 19:27:18 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>

Span::Span(unsigned int size) : len(size)
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
	std::cout << "copy assignement operator Span called !" << std::endl;

	len = s.getLen();
	v = s.getVect();
	return *this;
}

unsigned int Span::getLen(void) const
{
	return len;
}

std::vector<int> Span::getVect(void) const
{
	return v;
}


void	Span::show(void) const
{
	for	(size_t i=0; i<v.size(); i++)
		std::cout << v[i] << std::endl;
}

void	Span::addNumber(int nbr)
{
	try
	{
		if (v.size() >= len)
			throw TooMuchException();
		v.push_back(nbr);

	}catch(std::exception & e)
	{
		std::cout << e.what()  << std::endl;
	}
}

// void	Span::addNumbers()
// {

// }

int Span::shortestSpan(void)
{
	
}

int Span::longestSpan(void)
{
	try
	{
		if (v.size() < 2)
			throw NotEnoughException();
		std::sort(v.begin(), v.end());
	}catch (std::exception & e)
	{std::cout << e.what() << std::endl;}
	return (v.back() - v.front());
}