/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 12:18:07 by smlamali         ###   ########.fr       */
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
			ShrubberyCreationForm tree("tree");
			Bureaucrat blip("blip", 10);

			tree.beSigned(blip);
			
			// ShrubberyCreationForm bis = tree;
			// std::cout << tree << bis << std::endl;
			
			// tree.execute(blip);
			blip.executeForm(tree);
		}catch (std::exception & e)
		{
			std::cout << "oh" << std::endl;
			std::cout << e.what() << RST << std::endl;
		}
	}

	// {
	// 	try
	// 	{
	// 		Bureaucrat sam("Sam", 4);
	// 		PresidentialPardonForm bob("bloup");

	// 		std::cout << bob;
	// 		std::cout << sam << std::endl;

	// 		bob.beSigned(sam);
	// 		sam.executeForm(bob);
	// 	}
	// 	catch(std::exception & e)
	// 	{
	// 		std::cout << BPNK << "err:" << std::endl;
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
	// 	}catch (std::exception & e)
	// 	{
	// 		std::cout << "oh" << std::endl;
	// 		std::cout << e.what() << RST << std::endl;
	// 	}
	// }
}