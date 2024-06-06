/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/06 14:40:01 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{	
	{
		try
		{
			ShrubberyCreationForm tree("T");
			Bureaucrat blip("blip", 149);

			std::cout << blip << tree << std::endl;
			blip.signForm(tree);			
			blip.executeForm(tree);
		}catch (std::exception & e)
		{
			std::cout << "oh" << std::endl;
			std::cout << e.what() << RST << std::endl;
		}
	}

/*	
	{
		try
		{
			Bureaucrat sam("Sam", 21);
			PresidentialPardonForm bob("bloup");

			std::cout << std::endl<< sam << bob << std::endl;

			sam.signForm(bob);
			sam.executeForm(bob);

			std::cout << bob;
		}
		catch(std::exception & e)
		{
			std::cout << BPNK << "err:" << std::endl;
			std::cout << e.what() << RST << std::endl;
		}
	}
*/
	/*
	{
		try
		{
			RobotomyRequestForm robot("robot");
			Bureaucrat blip("blip", 45);

			std::cout << std::endl << blip << robot << std::endl;

			blip.signForm(robot);
			blip.executeForm(robot);

			std::cout << robot;
		}catch (std::exception & e)
		{
			std::cout << "oh" << std::endl;
			std::cout << e.what() << RST << std::endl;
		}
	}
	*/
}