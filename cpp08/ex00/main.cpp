/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:10:21 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/22 18:12:28 by smlamali         ###   ########.fr       */
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
		l.push_back(4);
		
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
}