/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   celciustofarentheit.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:09:44 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/22 23:19:36 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double celcius;
	double farenheit;

	celcius = 0;
	farenheit = 0;
	scanf("%lf", &celcius);
	farenheit = celcius*9.0/5.0+32.0;
	printf("%.1lf\n", farenheit);
}
