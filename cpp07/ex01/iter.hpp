/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:05:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/17 18:43:23 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>

template <typename T>
void	iter( T *arr, size_t len, void (*f)(T &))
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
void ft_print(T & a)
{
	std::cout << a << std::endl;
}

template< typename T >
void ft_add(T & x)
{
  std::cout << x << std::endl;
  x += 1;
  return;
}
