/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 10:53:18 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main(void)
{
	{
		try
		{
			Bureaucrat sam("puro", 1);
			std::cout << sam;

		}
		catch (std::exception & e)
		{
			std::cout << BGRN << "OOOOOPS !" << std::endl;
			std::cout << e.what() << RST << std::endl;
		}
		std::cout << "*msg hors try bloc*" << std::endl;
	}

	// {
	// 	Bureaucrat 	rdm("truc", 1);
	// 	Bureaucrat	bis;

	// 	std::cout << rdm << bis;
		
	// 	bis = rdm;
	// 	std::cout << bis;

	// }

	// {
	// 	Bureaucrat plop("plop", 1);
	
	// 	try
	// 	{
	// 		std::cout << plop << std::endl;
	
	// 		plop.decrement();
	// 		plop.increment();
	// 		plop.increment();
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << BGRN << "OOOOOPS !" << std::endl;
	// 		std::cout << e.what() << RST << std::endl;
	// 	}
	// 	std::cout << plop;
	// }
}