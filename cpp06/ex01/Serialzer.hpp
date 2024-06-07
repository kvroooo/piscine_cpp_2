/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialzer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:52:25 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/07 17:59:31 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>
#include "Data.hpp"

class Data;
class Serializer
{
private:
	Serializer();
	Serializer(const Serializer & s);

	Serializer & operator=(const Serializer & s);

public:
	virtual ~Serializer();

	static uintptr_t serialize(Data *ptr);
	static Data* deserialize(uintptr_t raw);
};

