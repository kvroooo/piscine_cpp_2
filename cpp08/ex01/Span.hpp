/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:53:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/19 15:12:33 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <list>

class Span
{
private:
	unsigned int N;
	std::list<unsigned int> l;
public:
	Span(unsigned int N);
	~Span();
	Span(const Span & s);

	Span & operator=(const  Span & s);

	void	addNumber(int n);
	void	shortestSpan(void) const;
	void	longestSpan(void) const;

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