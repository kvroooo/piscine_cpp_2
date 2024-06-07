/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:52:25 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/07 19:00:26 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialzer.hpp"
#include <iostream>

int	main(void)
{
	int	nbr = 10;

	Data obj(&nbr);

	std::cout << "Contenue de obj = " << *(reinterpret_cast<int*>(obj.getData())) << std::endl;
	std::cout << "add_nbr: 	" << &obj << std::endl;
	uintptr_t ptrInt =	Serializer::serialize(&obj);
	Data *		ptrData = Serializer::deserialize(ptrInt);
	std::cout << ptrData << std::endl;
	std::cout << "Contenue de obj = " << *(reinterpret_cast<int*>((ptrData)->getData())) << std::endl;

	return (0);
}