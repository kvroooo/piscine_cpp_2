/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:54:54 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/22 16:50:12 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>

int	main(void)
{
	// std::list<int>;
	Span sp = Span(10000);

	std::cout <<   "N = " << sp.getN() << std::endl;
	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumber(3);
	sp.addNumber(4);
	sp.addNumber(5);

	std::cout << "longest span : " << sp.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;

	sp.printList();

	// sp.printList();
	// std::cout << "longest span : " << sp.longestSpan() << std::endl;
	// std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
}