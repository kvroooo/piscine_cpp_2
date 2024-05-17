/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/16 16:51:41 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

#include <exception>
#include <iostream>

int main(void)
{
	try
	{
		Intern PanthereRose;
		Form *rrf;

		rrf = PanthereRose.makeForm("presidential pardon", "bob");
		if (rrf)
			std::cout << rrf->getName() << std::endl;
	
	}
	catch(std::exception & e)
	{
		std::cout << "oh oh" << std::endl;
	}	
	// try
	// {
	// 	Intern PanthereRose;
	// 	Form *rrf;

	// 	rrf = PanthereRose.makeForm("shrubbery ", "ploup");
	// 	if (rrf)
	// 		std::cout << rrf->getName() << std::endl;
	
	// }
	// catch(std::exception & e)
	// {
	// 	std::cout << "oh oh" << std::endl;
	// }

}