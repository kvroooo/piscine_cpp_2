/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:21:12 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/29 18:25:00 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
	std::vector<int> a;

	a.push_back(6);
	a.push_back(3);
	a.push_back(17);
	a.push_back(9);
	a.push_back(11);

	for	(size_t i=0; i<a.size(); i++)
		std::cout << a[i] << std::endl;

	std::sort(a.begin(), a.end());
	
	for	(size_t i=0; i<a.size(); i++)
		std::cout << a[i] << std::endl;
}
