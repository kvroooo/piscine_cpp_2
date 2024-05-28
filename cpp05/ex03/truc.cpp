/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   truc.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:03:58 by smlamali          #+#    #+#             */
/*   Updated: 2024/05/03 16:40:29 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "colors.hpp"
int main(void)
{
	std::cout << BGRN << "    &&&&&" << std::endl;
	std::cout 		  << "  &&&&&&&&&" << std::endl;
	std::cout 		  << "&&&&&&&&&&&&&&" << std::endl;
	std::cout 		  << " &&&&&&&&&&&&" << std::endl;
	std::cout 		  << "     ||" << std::endl;
	std::cout 		  << "     ||/" << std::endl;
	std::cout 		  << "     ||" << RST << std::endl;
}
