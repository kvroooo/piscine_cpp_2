/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:41:52 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/10 13:12:12 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <typename T>
T const & min(T & a ,T & b)
{
	return (a<b ? a : b);
}

template <typename T>
T const & max(T & a, T & b)
{
	return (a>b ? a : b);
}

template <typename T>
void const swap(T & a, T &b)
{
	std::cout << "before swap : " << a << "," << b << std::endl;
	std::cout << "adr_a = " << &a << ", adr_b =" << &b << std::endl;
	T tmp = a;
	a = b;
	b = tmp;
	std::cout << "after swap : " << a << "," << b << std::endl;
	std::cout << "adr_a = " << &a << ", adr_b =" << &b << std::endl;
}

int main(void)
{
	int a = 18;
	int b = 9;

	::swap(a,b);
	std::cout << "min(" << a << "," << b << ") = " << ::min(a, b) << std::endl;
	std::cout << "max(" << a << "," << b << ") = " << ::max(a, b) << std::endl;

	std::cout << "-------------------------------" << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}