/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/29 19:23:56 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <sys/types.h>

class Span
{
private:
	unsigned int len;
	std::vector<int> v;

public:
	Span(unsigned int size);
	~Span();
	Span(const Span & s);

	Span & operator=(const Span & s);

	void				show(void)const;
	void				addNumber(int nbr);
	void				addNumbers(size_t n, int nbr);
	int					shortestSpan(void);
	int					longestSpan(void);
	unsigned int		getLen(void) const;
	std::vector<int>	getVect(void)const;

	class TooMuchException : public std::exception
	{
		virtual const char * what() const throw()
		{
			return "error: vector full, can't add more number;";
		}
	};

	class NotEnoughException : public std::exception
	{
		virtual const char * what() const throw()
		{
			return "error: not enough number in vector to find span";
		}
	};
};