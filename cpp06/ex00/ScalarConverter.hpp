/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:19:14 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/06 17:43:53 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

class ScalarConverter
{
private:

	ScalarConverter(void);
	ScalarConverter(const ScalarConverter & s);
	ScalarConverter & operator=(const ScalarConverter & s);

public: 
	virtual ~ScalarConverter();

	static void	convert(std::string literal);

	static void	charConvert(std::string literal);
	static void	intConvert(std::string literal);
	static void	floatConvert(std::string literal);
	static void	doubleConvert(std::string literal);

	class EmptyException : public std::exception
	{
			virtual const char * what() const throw()
			{
				return ("err: input is empty");	
			}
	};
};