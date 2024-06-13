/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:35:55 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/13 16:53:46 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>
#include <sys/types.h>

int main(void)
{
	/*	---- INT TAB  ----*/
	{
		Array <int>a = Array<int>(5);
		Array <int>b;
		// Array <int>b = Array<int>(3);
		try
		{
			for (unsigned int i = 0; i < a.size(); i++)
				a.setArr(i, i + 1);
			b = a;
			std::cout << "A:" << a;
			std::cout << "B:" << b;
			a.setArr(1, 0);
			a.setArr(0, 0);
			b.setArr(3, 99);
			b.setArr(4, 99);
			std::cout << " --- AFTER MODIFICATION --- " << std::endl;
			std::cout << "A:" << a;
			std::cout << "B:" << b;
		}catch (std::exception & e)
		{
			std::cout << "err: " << e.what() << std::endl;
		}
	}

	/*	---- CHAR TAB  ----*/
	// {
	// 	Array <char>a = Array<char>(3);
	// 	Array <char>b = Array<char>(1);
	// 	try
	// 	{
	// 		for (unsigned int i=0; i<a.size(); i++)
	// 			a.setArr(i, 'a' + i);
	// 		std::cout << "A: " << a;
	// 		b = a;
	// 		std::cout << "B: " << b;

	// 	}catch(std::exception & e)
	// 	{
	// 		std::cout << "err: " << e.what() << std::endl;
	// 	}
	// }
}
