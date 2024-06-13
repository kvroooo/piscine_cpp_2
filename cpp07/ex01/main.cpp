/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:05:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/11 17:40:58 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int tab[3] = {6, 7, 8};
	// char tab[4] = {'a', 'b', 'c'};
	// float tab[3] = {2.0f, 3.0, 4.52f};
	
	// std::cout << &tab << std::endl;
	std::cout << " === before iter === " << std::endl;
	
	::iter(tab, 3, f);
	
	std::cout << " === after iter === " << std::endl;
	
	std::cout << tab[0] << std::endl;
	std::cout << tab[1] << std::endl;
	std::cout << tab[2] << std::endl;
}


// void	iter(int * arr, int len, void(*f)(int & a))
// {
// 	std::cout << arr << std::endl;
// 	for (int i=0; i<len; i++)
// 		f(arr[i]);
// }

// void f(int & a)
// {
// 	std::cout << a << std::endl;
// 	a = a + 1;
// }
