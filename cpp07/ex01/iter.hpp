/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:05:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/11 17:41:30 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>

template <typename T, typename function = void (*)(T&)>
void	iter( T * arr, size_t len, function f)
{
	if (!arr)
		return ;
	try
	{
		for (size_t i=0; i<len; i++)
			f(arr[i]);
	}catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}

template <typename T>
void f(T & a)
{
	std::cout << a << std::endl;
	a = a + 1;
}

