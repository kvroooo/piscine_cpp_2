/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:41:56 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/05 17:45:21 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter & s)
{
	(void)s;
	*this = s;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & s)
{
	(void)s;
	return *this;
}

static void ScalarConverter(std::string literal)
{
	//hm
}


