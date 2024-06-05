/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:19:14 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/05 17:45:14 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

class ScalarConverter
{
private:

	ScalarConverter();
	virtual ~ScalarConverter();
	ScalarConverter(const ScalarConverter & s);
	ScalarConverter & operator=(const ScalarConverter & s);

public: 

	static void	convert(std::string literal);
};