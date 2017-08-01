/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnepfumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 13:35:23 by mnepfumb          #+#    #+#             */
/*   Updated: 2017/08/01 13:57:53 by mnepfumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int av, char **ac)
{
	int num;
	int looper;

	looper = 2;
	if (av == 2)
	{
		num = atoi(ac[1]);
		if (num == 1)
			printf("1");
		while (num > 1)
		{
			while (num % looper == 0)
			{
				num = num / looper;
				printf("%i", looper);
				if (num > 1)
					printf("*");
			}
			looper++;
		}
		printf("\n");
	}
	else
		printf("\n");
	return (0);
}
