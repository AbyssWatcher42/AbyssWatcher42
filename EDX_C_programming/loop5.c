/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:43:39 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/22 01:49:36 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	scanf("%d", &j);
	while (i <= 10)
	{
		printf("%dx%d = %d\n", i, j, j*i);
		++i;
	}
	return (0);
}
