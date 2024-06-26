/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/04 14:27:20 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Intern ploup;
		Bureaucrat	pam("Pam", 5);
		Form *rrf;

		rrf = ploup.makeForm("presidential pardon", "Pinpin");
		
		std::cout << std::endl << pam << *rrf; 
		pam.signForm(*rrf);
		pam.executeForm(*rrf);
		std::cout << *rrf;
		delete rrf;
	}
	catch(std::exception & e)
	{
		std::cout << BPNK << e.what() << RST << std::endl;

	}	
}