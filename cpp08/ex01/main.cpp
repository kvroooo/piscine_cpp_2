/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:54:54 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/23 16:59:13 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span a = Span(20000);

	std::cout << BPNK << " ---- ADD NUMBER ---- " << RST << std::endl;
	a.addNumber(6);
	a.addNumber(3);
	a.addNumber(17);
	a.addNumber(9);
	a.addNumber(11);
	// for (int i=0; i < 5; i++)
	// 	a.addNumber(i);
	a.show();

	std::cout << BPNK << std::endl << "--- LONGEST/SHORTEST SPAN ---" << RST << std::endl;
	try
	{
		std::cout << "longest span: " << a.longestSpan() << std::endl;
		std::cout << "shortest span: " << a.shortestSpan() << std::endl;
	}catch(std::exception & e)
	{std::cout << e.what() << std::endl;}

	std::cout << BPNK << std::endl << " ---- ADD NUMBERS ---- " << RST <<std::endl;

	std::vector<int> b;
	// for (int i=0; i < 10500; i++)
	// 	a.addNumber(i);
	b.push_back(20);
	b.push_back(21);
	b.push_back(22);

	a.addNumber(b, b.begin(), b.end());
	a.show();
}