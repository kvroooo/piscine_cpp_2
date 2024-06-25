 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:46:19 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/10 14:07:04 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>

template <typename T>
T const & min(T & a ,T & b)
{
	return (a<b ? a : b);
}

template <typename T>
T const & max(T & a, T & b)
{
	return (a>b ? a : b);
}

template <typename T>
void swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
