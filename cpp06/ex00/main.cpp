/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:13:34 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/06 16:16:54 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc ,char **argv)
{
	if (argc == 1)
	{
		std::cout << "err : empty arg" << std::endl;
		return (0);
	}	

	ScalarConverter::convert(argv[1]);
	// try
	// {	
	// 
	// }catch(std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
}