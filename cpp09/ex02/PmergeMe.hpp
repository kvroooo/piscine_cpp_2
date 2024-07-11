/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:58:08 by smlamali          #+#    #+#             */
/*   Updated: 2024/07/11 19:01:53 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <vector>

class PmergeMe
{
private:
	
	PmergeMe(char *arg);
	~PmergeMe(void);
	PmergeMe(const PmergeMe & p);

	PmergeMe & operator=(const PmergeMe & p);


};