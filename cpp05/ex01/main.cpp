/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:21:06 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/04 13:53:07 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat plop("ploup", 1);
			Form sam("Kuro", 5, 1);

			std::cout << plop;
			plop.signForm(sam);
		}
		catch (std::exception & e)
		{
			std::cout << BCYN << "error: " << e.what() << RST << std::endl;
		}
	}

/*	{
		try
		{
			Bureaucrat him("Him", 60);
			Form sam("Sam", 60, 10);
			Form fail;


			sam.beSigned(him);
			Form bis = sam;

			std::cout << std::endl << sam << bis << fail << std::endl;

			fail = sam;
			std::cout << fail;
		}catch (std::exception & e)
		{
			std::cout << BCYN << "error: " << e.what() << RST << std::endl;
		}
	}*/

}