/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/22 16:51:30 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>
#include <list>
#include <algorithm>
#include <limits>

class Span
{
private:
	unsigned int N;
	std::list<int> l;
public:
	Span(unsigned int N);
	~Span();
	Span(const Span & s);

	Span & operator=(const  Span & s);

	void			addNumber(int nbr);
	void			addNumbers(std::list<int> liste);
	unsigned int	shortestSpan(void)	const;
	unsigned int	longestSpan(void)	const;
	unsigned int	getN(void) const;
	void			printList(void)const;

	class TooMuchException : public std::exception
	{
		virtual const char * what() const throw()
		{
			return "error: list full, can't add more number;";
		}
	};

	class NotEnoughException : public std::exception
	{
		virtual const char * what() const throw()
		{
			return "error: not enough number in list to find distance";
		}
	};
};