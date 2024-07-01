/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:54:54 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/01 17:26:23 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span a = Span(0);

	std::cout << " ---- ADD NUMBER ---- " << std::endl;
	a.addNumber(6);
	a.addNumber(3);
	a.addNumber(17);
	a.addNumber(9);
	a.addNumber(11);
	a.show();

	std::cout << std::endl << "--- LONGEST/SHORTEST SPAN ---" << std::endl;
	try
	{
		std::cout << "longest span: " << a.longestSpan() << std::endl;
		std::cout << "shortest span: " << a.shortestSpan() << std::endl;
	}catch(std::exception & e)
	{std::cout << e.what() << std::endl;}

	std::cout << std::endl << " ---- ADD NUMBERS ---- " << std::endl;

	std::vector<int> b;

	b.push_back(1);
	b.push_back(2);
	b.push_back(3);

	a.addNumber(b, b.begin(), b.end());
	a.show();
}