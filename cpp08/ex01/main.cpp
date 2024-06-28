/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:54:54 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/28 16:11:00 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>

int	main(void)
{
	// {
	// 	Span a = Span(5);

	// 	a.printList();
	// 	a.addNumbers(100, 6);
	// 	a.printList();
	// }
	{
		// std::list<int>;

		Span sp = Span(10000);

		std::cout <<   "N = " << sp.getN() << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.printList();

		std::cout << "longest span : " << sp.longestSpan() << std::endl;

		sp.printList();
		// std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		//addnum
		// sp.printList();
		// std::cout << "longest span : " << sp.longestSpan() << std::endl;
		// std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	}
}