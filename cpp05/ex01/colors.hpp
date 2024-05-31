/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dark_pink.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:53:52 by smlamali          #+#    #+#             */
/*   Updated: 2024/01/19 18:08:03 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Terminal + ANSI color */

#pragma once

/*	Term Color Palette : dark pink 
     0:#221E25| 1:#920068| 2:#FF42C1| 3:#796E65| 4:#DBA6DA
	 5:#A347BA| 6:#D5A9D6| 7:#6EC677| 8:#ECEAF0| 9:#F66151
	10:#588E71|11:#E9AD0C|12:#2A7BDE|13:#C061CB|14:#33C7DE	
	15:#FFFFFF|
*/

//Regular bold text
#define BRED "\e[1;31m"
#define BPNK "\e[1;32m"
#define BCYN "\e[1;36m"
#define BGRN "\e[1;37m"

//Regular text
#define RED "\e[0;31m"
#define PNK "\e[0;32m"
#define CYN "\e[0;36m"
#define GRN "\e[0;37m"
//Reset 
#define RST "\e[0m"

// int main(void)
// {
// 	std::cout << "NRML" << std::endl;
// 	std::cout << RED << "RED" << RST << std::endl;
// 	std::cout << PNK << "PNK" << RST << std::endl;
// 	std::cout << CYN << "CYN" << RST << std::endl;
// 	std::cout << GRN << "GRN" << RST << std::endl;

// }