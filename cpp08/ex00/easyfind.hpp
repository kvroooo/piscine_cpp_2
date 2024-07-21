/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:11:53 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/21 14:38:05 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <list>
#include <algorithm>

template <typename T>
void	easyfind(T l, int n);

class NotFoundException : public std::exception
{
	virtual const char * what() const throw()
	{
		return "number not found !";
	}
};

class EmptyListException : public std::exception
{
	virtual const char * what() const throw()
	{
		return "error: list empty !";
	}
};

#include "easyfind.tpp"