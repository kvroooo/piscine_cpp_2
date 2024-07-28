/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:22:08 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/28 18:10:39 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char**argv)
{
	if (argc < 2)
	{
		std::cout << "error: wrong arg" << std::endl;
		return (0);
	}
	try
	{PmergeMe p(argv);}
	catch(std::exception & e)
	{std::cout << e.what() << std::endl;}

}	