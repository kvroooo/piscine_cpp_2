/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:28:17 by smlamali          #+#    #+#             */
/*   Updated: 2024/06/06 16:56:15 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (printf("missing arg\n"), 1);
	printf("[%s]-> %d = %c \n", argv[1], atoi(argv[1]), atoi(argv[1]));
	return (0);
}
