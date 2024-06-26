/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:41:52 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/25 15:37:38 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

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

	std::cout << "before swap : c=" << c << ", d=" << d << std::endl;
	::swap(c, d);
	std::cout << "after swap : c=" << c << ", d=" << d << std::endl;
	
	std::cout << "-------------------------------" << std::endl;
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}