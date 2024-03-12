/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Celcius_to_Fahreheit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:42:34 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/01 10:00:01 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float celcius;
	float fahr;
	int lower;
	float upper;
	int step;

	celcius = 0;
	fahr = 0;
	lower = 0;
	upper = 148.9;
	step = 20;
	scanf("%f", &celcius);
	lower = celcius;
	while (lower <= upper)
	{
		fahr = ((celcius * (9.0 / 5.0)) + 32);
		printf("%6.1f\t %3.0f\n", celcius, fahr);
		celcius = celcius + step;
		return (0);
	}
}
