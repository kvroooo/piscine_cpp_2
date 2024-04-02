/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:59:04 by smlamali          #+#    #+#             */
/*   Updated: 2024/04/02 18:27:52 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

int main(void)
{
	Bureaucrat him("Lui", 3);

	std::cout << BPNK << "---- START ----" << RST << std::endl;
	std::cout << him << std::endl;
	try
	{
		him.upGrade();
		him.upGrade();
		him.upGrade();
	}
	catch (GradeTooLowException& e)
	{
		std::cout << BGRN << e.what() << RST << std::endl;
	}
		
	return 0;
}
