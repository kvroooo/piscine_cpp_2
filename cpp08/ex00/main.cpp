/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:10:21 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/18 17:58:26 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::list<int> l;

	l.push_back(10);
	l.push_back(3);
	l.push_back(4);
	l.push_back(2);
	l.push_back(4);
	l.push_back(6);

	easyfind(l, 3);
}