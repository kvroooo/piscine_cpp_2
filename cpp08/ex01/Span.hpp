/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/21 18:16:54 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <sys/types.h>

#include "dark_pink.hpp"

class Span
{
private:
	unsigned int len;
	std::vector<int> v;

	int	fun(std::vector<int>);

public:
	Span(unsigned int size);
	~Span();
	Span(const Span & s);

	Span & operator=(const Span & s);

	void				show(void)const;
	void				addNumber(int nbr);
	void				addNumber(std::vector<int> nvect, std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int					shortestSpan(void);
	int					longestSpan(void);
	unsigned int		getLen(void) const;
	std::vector<int>	getVect(void)const;

	class TooMuchException : public std::exception
	{virtual const char * what() const throw();};

	class NotEnoughException : public std::exception
	{virtual const char * what() const throw();};
};