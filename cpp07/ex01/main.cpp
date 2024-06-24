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


int main() {
	int tab[3] = {6, 7, 8};

	std::cout << " === iter === " << std::endl;
	::iter(tab, 3, add);

	std::cout << " === iter === " << std::endl;
	for (int i = 0; i<3; i++)
		std::cout << tab[i] << std::endl;

  return 0;
}

 // int tab[] = { 0, 1, 2, 3, 4 };
  // Awesome tab2[5];

  // iter( tab, 5, print<const int> );
  // iter( tab2, 5, print<Awesome> );
