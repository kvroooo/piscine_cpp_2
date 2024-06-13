/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:10:21 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/13 17:35:55 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>


// template <typename T>
// int	easyfind(T t, int n)
// {
	
// }

int main(void)
{
	std::list<int> l;

	std::list<int>::const_iterator lst;
	std::list<int>::const_iterator lste = l.end();

	l.push_back(10);
	l.push_back(3);
	l.push_back(4);
	l.push_back(2);
	l.push_back(4);
	l.push_back(6);

	for (lst = l.begin(); lst != lste; lst++)
		std::cout << *lst << std::endl;
}