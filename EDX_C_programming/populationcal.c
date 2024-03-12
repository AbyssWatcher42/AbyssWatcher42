/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populationcal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 03:30:38 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/23 03:49:24 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int population;
	double growth;
	
	population = 0;
	growth = 0;
	scanf("%d", &population);
	scanf("%lf", &growth);
	int estimation = (int)(population * (1 + growth / 100));
	printf("%d", estimation);
     	return (0);	
}
