/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:33:00 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/18 17:58:20 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "easyfind.hpp"

template <typename T>
void easyfind(T l, int n)
{
	if (l.empty())
	{
		std::cout << "error: empty list" << std::endl;
		return ;
	}
	std::list<int>::const_iterator lst;
	std::list<int>::const_iterator lste = l.end();

	for (lst = l.begin(); lst != lste; lst++)
	{
		if (*lst == n)
		{
			std::cout << n << " was found" << std::endl;
			return ;
		}
	}
	std::cout << "no occurence of "<< n << " found !" << std::endl;
	return ;
}