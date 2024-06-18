/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:52:25 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/18 16:11:58 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialzer.hpp"
#include <iostream>

int	main(void)
{

	{
		int nbr = 13;
		Data *data = new Data;

		Data 		*after;
		uintptr_t	serl;

		data->a = &nbr;
		std::cout << "adr_data " << data << std::endl;
		std::cout << "addr_a   " << data->a << std::endl;
		std::cout << "val_a    " << *data->a << std::endl;

		std::cout << "---- SERIALIZATION : DATA ---- " << std::endl;
		serl = Serializer::serialize(data);
		std::cout << serl << std::endl;

		std::cout << "---- DESERIALIZATION ---- " << std::endl;
		after = Serializer::deserialize(serl);

		std::cout << "after adr  " << after << std::endl;
		std::cout << "after adr  " << after->a << std::endl;
		std::cout << "val after  " << *after->a << std::endl;
	}

		//void ptr :
	/*{
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
		std::cout << "after data adr: " << after << std::endl;
		std::cout << "after val adr: " << after->a << std::endl;
		std::cout << "val : " << *(reinterpret_cast<char *>(after->a)) << std::endl; 
	}*/

	return (0);
}