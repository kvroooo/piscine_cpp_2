/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:46:19 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/10 13:23:26 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>

template <typename T>
class Whatever
{
public:
	Whatever<T>(T const & c){};
	~Whatever<T>(){};
	Whatever<T>(Whatever<T> const & c){};

private:
	T _c;
};

