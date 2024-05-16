/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/16 16:49:49 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>
#include <iostream>

int main(void)
{	

	{
		try
		{
			Bureaucrat sam("Sam", 4);
			PresidentialPardonForm bob("bob");

			std::cout << bob << std::endl;

			// bob.beSigned(sam);
			sam.executeForm(bob);
		}
		catch(std::exception & e)
		{
			std::cout << BPNK << "err:" << std::endl;
			std::cout << e.what() << RST << std::endl;
		}
	}
	// {
	// 	try
	// 	{
	// 		ShrubberyCreationForm ploup("boing");
	// 		Bureaucrat blip("blip", 130);
	// 		ploup.beSigned(blip);
	// 		// blip.executeForm(ploup);
	// 	}catch (std::exception & e)
	// 	{
	// 		std::cout << "oh" << std::endl;
	// 		std::cout << e.what() << RST << std::endl;
	// 	}
	// }

	// {
	// 	try
	// 	{
	// 		PresidentialPardonForm macron("macron");
	// 		Bureaucrat blip("blip", 1);
	// 		// macron.beSigned(blip);
	// 		blip.executeForm(macron);
	// 		blip.executeForm(macron);
	// 	}catch (std::exception & e)
	// 	{
	// 		std::cout << "oh" << std::endl;
	// 		std::cout << e.what() << RST << std::endl;
	// 	}
	// }

	// {
	// 	try
	// 	{
	// 		RobotomyRequestForm robot("robot");
	// 		Bureaucrat blip("blip", 1);
	// 		robot.beSigned(blip);
	// 		blip.executeForm(robot);
	// 		blip.executeForm(robot);
	// 	}catch (std::exception & e)
	// 	{
	// 		std::cout << "oh" << std::endl;
	// 		std::cout << e.what() << RST << std::endl;
	// 	}
	// }
}