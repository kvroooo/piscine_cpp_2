/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:57:52 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/07 18:36:44 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Serialzer.hpp"

class Serializer;

class Data
{
private:
	void *addr;

public:

	Data(void *a);
	~Data();
	Data(const Data & d);

	Data & operator=(const Data & d);

	void setData(void *d);
	void *getData(void) const;
};