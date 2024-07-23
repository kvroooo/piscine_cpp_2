/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/23 16:45:02 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <iterator>

Span::Span(unsigned int size) : len(size)
{
	std::cout << "constructor Span called !" << std::endl;
	std::cout << BCYN << "MAX SIZE = " << size << RST << std::endl;
}

Span::~Span()
{
	std::cout << "destructor Span called !" << std::endl;
}

const char * Span::TooMuchException::what() const throw()
{
	return "error: vector full, can't add more number;";
}

const char * Span::NotEnoughException::what() const throw()
{
	return "error: not enough number in vector to find span";
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
	std::cout << "span contain : ";
	for	(size_t i=0; i<v.size(); i++)
		std::cout << "[" << v[i] << "]";
	std::cout << std::endl;
}

void	Span::addNumber(int nbr)
{
	try
	{
		if (v.size() >= len)
			throw TooMuchException();
		v.push_back(nbr);
		show();
	}catch(std::exception & e)
	{
		std::cout << e.what()  << std::endl;
	}
}

void	Span::addNumber(std::vector<int> nvect, std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	try
	{
		if (nvect.size() + v.size() > len)
			throw TooMuchException();
		v.insert(v.end(), begin, end);
	}catch(std::exception & e)
	{std::cout << e.what() << std::endl;}
}


int Span::shortestSpan(void)
{
	int shortest = longestSpan();
	// try
	// {
	if (v.size() < 2)
		throw NotEnoughException();
	std::sort(v.begin(), v.end());
	for (size_t i=0; i<v.size(); i++)
	{
		if (i < (v.size() - 1) 
			&& v[i + 1] - v[i] < shortest)
			shortest = v[i + 1] - v[i];
	}
	// }catch(std::exception & e)
	// {std::cout << e.what() << std::endl;}
	return shortest;
}

int Span::longestSpan(void)
{
	// try
	// {
	if (v.size() < 2)
		throw NotEnoughException();
	std::sort(v.begin(), v.end());
	// }catch (std::exception & e)
	// {std::cout << e.what() << std::endl;}
	return (v.back() - v.front());
}