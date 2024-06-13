/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:52:25 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/13 17:03:27 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialzer.hpp"
#include <iostream>

int	main(void)
{
	// {
	// 	std::cout << "hello" << std::endl;
	// 	int	nbr = 10;

	// 	Data obj(&nbr);

	// 	std::cout << "Contenue de obj = " << *(reinterpret_cast<int*>(obj.getData())) << std::endl;
	// 	std::cout << "add_nbr: 	" << &obj << std::endl;
	// 	uintptr_t ptrInt =	Serializer::serialize(&obj);
	// 	Data *		ptrData = Serializer::deserialize(ptrInt);
	// 	std::cout << ptrData << std::endl;
	// 	std::cout << "Contenue de obj = " << *(reinterpret_cast<int*>((ptrData)->getData())) << std::endl;
	// }

	// {
	// 	int nbr = 13;
	// 	Data *data = new Data;
	// 	Data *after;
	// 	uintptr_t serl;

	// 	data->a = &nbr;
	// 	std::cout << "data:" << data << std::endl;
	// 	std::cout << "a   :" << data->a <<std::endl;
		
	// 	std::cout << "---- SERIALIZATION : DATA ---- " << std::endl;
	// 	serl = Serializer::serialize(data);
	// 	std::cout << serl << std::endl;

	// 	std::cout << "---- DESERIALIZATION ---- " << std::endl;
	// 	after = Serializer::deserialize(serl);
	// 	std::cout << "after_ptr: " << after << std::endl;
	// 	std::cout << "after val: " << after->a << std::endl;

	// }

	{
		char c = 's';
		Data *data = new Data;
		Data *after;
		uintptr_t serl;

		data->a = &c;
		std::cout << "data:" << data << std::endl;
		std::cout << "a   :" << data->a <<std::endl;
		
		std::cout << "---- SERIALIZATION : DATA ---- " << std::endl;
		serl = Serializer::serialize(data);
		std::cout << serl << std::endl;

		std::cout << "---- DESERIALIZATION ---- " << std::endl;
		after = Serializer::deserialize(serl);
		std::cout << "after adr: " << after << std::endl;
		std::cout << "after ad_val: " << after->a << std::endl;
		std::cout << "val : " << *(reinterpret_cast<char *>(after->a)) << std::endl; 
	}
	return (0);

}