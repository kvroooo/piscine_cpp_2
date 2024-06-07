/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:52:25 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/07 18:47:40 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialzer.hpp"


Serializer::Serializer(){}
Serializer::~Serializer(){}

Serializer::Serializer(const Serializer & s)
{
	*this = s;
}

Serializer & Serializer::operator=(const Serializer & s)
{
	(void)s;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
