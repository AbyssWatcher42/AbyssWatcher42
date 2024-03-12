/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_3_2printcharacters.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 03:18:17 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/22 18:04:47 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int i;
	int j;
	int n;
	char input;

	i = 0;
	j = 0;
	n = 0;

	printf("rows to print: ");
	scanf("%d", &n);
	printf("symbols to print: ");
	scanf(" %c", &input);
	
	while (i < n)
	{
		j = 0;
		while (j < n - i - 1)
		{
			printf("+");
			j++;
		}
		while (j < n + i)
		{
			printf("%c", input);
			j++;
		}
		while (j < 2 * n - 1)
		{
			printf("+");
			j++;
		}
		printf("\n");
		i++;
	}
/*	i = n - 2;
	while(i >= 0)
	{
		j = 0;
		while(j < n - i - 1)
		{
			printf("+");
			j++;
		}
		while (j < n + i)
		{
			printf("%c", input);
			j++;
		}
		while (j < 2 * n - 1)
		{
			printf("+");
			j++;
		}
		printf("\n");
		i--;
	}*/
	return (0);
}
