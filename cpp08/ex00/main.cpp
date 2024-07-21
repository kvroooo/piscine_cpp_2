/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:10:21 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/21 15:00:54 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	try
	{
		std::list<int> l;

		l.push_back(10);
		l.push_back(3);
		l.push_back(4);
		l.push_back(2);
		l.push_back(8);
		l.push_back(6);

		easyfind(l, 10);
		easyfind(l, 3);
		easyfind(l, 4);
		easyfind(l, 2);
		easyfind(l, 6);
		easyfind(l, 5);
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	{
		try
		{
			std::list<char> l;

			l.push_back('a');
			l.push_back('*');
			l.push_back('6');

			easyfind(l, 'a');
			easyfind(l, '*');
			easyfind(l, '9');
		}catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
 	} 
}