/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:41:56 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/06 18:17:19 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstring>

ScalarConverter::ScalarConverter(void){}

ScalarConverter::~ScalarConverter(){}

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

void ScalarConverter::convert(std::string literal)
{
	try
	{
		ScalarConverter::charConvert(literal);
	}catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


void	ScalarConverter::charConvert(std::string literal)
{
	char	*endPtr;
	long 	val = std::strtol(literal.c_str(), &endPtr, 10);

	
	if (literal.empty())
		throw EmptyException();
	//check si [0] est dans la tab ascii / printable, len > 1 convert to int et check
	if (literal.size() == 1 && std::isprint(static_cast<unsigned>(literal[0])))
		std::cout << "char : " << literal[0] << std::endl;
	// else
	// 	std::cout << 
}