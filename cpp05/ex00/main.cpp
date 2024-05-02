/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/02 16:00:10 by smlamali         ###   ########.fr       */
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
			Bureaucrat sam("puro", 0);
		}
		catch (std::exception & e)
		{
			std::cout << BGRN << "OOOOOPS !" << std::endl;
			std::cout << e.what() << RST << std::endl;
		}
	}

	{
		Bureaucrat plop;
	
		try
		{
			std::cout << plop;
	
			plop.decrement();
			plop.increment();
			plop.increment();
		}
		catch (std::exception & e)
		{
			std::cout << BGRN << "OOOOOPS !" << std::endl;
			std::cout << e.what() << RST << std::endl;
		}
		std::cout << plop;
	}
}