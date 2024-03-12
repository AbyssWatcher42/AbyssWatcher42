/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fahrenheit_to_Celcius.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:25:41 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/01 09:36:40 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float fahr;
	float celcius;
	int lower;
	int upper;
	int step;


	fahr = 0;
	lower = 0;
	upper = 300;
	step = 20;
	scanf("%f", &fahr);
	lower = fahr;
	while (lower <= upper)
	{
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
		return (0);
	}
}
