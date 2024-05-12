/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/04 14:32:39 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>
#include <iostream>

int main(void)
{	
	try
	{
		ShrubberyCreationForm ploup("boing");
		Bureaucrat blip("blip", 150);
		ploup.execute(blip);
		// AForm ploup;
	}catch (std::exception & e)
	{
		std::cout << "oh" << std::endl;
		std::cout << e.what() << RST << std::endl;
	}
}