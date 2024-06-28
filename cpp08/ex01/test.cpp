/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:11:15 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/28 17:21:35 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int	main(void)
{
	std::vector<int> myvector = {10,20,30};
 	myvector.emplace(myvector.end(), {100, 200, 300});
 	for (size_t i=0; i<myvector.size(); i++)
 		std::cout << myvector[i] << std::endl;
  return 0;
}

//std::array<int, 5> a{1, 2, 3};

	// a.fill({5, 8, 9, 10});
	// for (size_t i=0; i < a.size(); i++)
	// 	std::cout << a.at(i) << std::endl;