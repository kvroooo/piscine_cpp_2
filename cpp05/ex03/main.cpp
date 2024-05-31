/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/31 12:26:57 by smlamali         ###   ########.fr       */
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
		Form *rrf;

		rrf = ploup.makeForm("presidential", "bob");
		if (rrf)
			std::cout << rrf->getName() << std::endl;
		delete rrf;
	}
	catch(std::exception & e)
	{
		std::cout << BPNK << e.what() << RST << std::endl;

	}	
}