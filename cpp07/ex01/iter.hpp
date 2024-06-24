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

template <typename T>
void	iter( T *arr, size_t len, void (*f)(T const &))
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
void f(T const & a)
{
	std::cout << a << std::endl;
}

template <typename T>
void add(T & a)
{
	std::cout << a << std::endl;
	a += 1;
}

// test iter with const ft
// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }