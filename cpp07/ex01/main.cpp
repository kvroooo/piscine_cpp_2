/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:05:51 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/25 15:42:14 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {


    int tab[3] = {6, 7, 8};

    std::cout << " === iter ft_print === " << std::endl;
    ::iter(tab, 3, ft_print);

    std::cout << " === before iter ft_add === " << std::endl;
    ::iter(tab, 3, ft_add);

    std::cout << " === after iter ft_add === " << std::endl;
    for (int i=0; i<3; i++)
        std::cout << tab[i] << std::endl;
  return 0;
}
