/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kilo_to_YunoMiles.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:21:44 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/22 21:59:55 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double kilo;
	double miles;
	
	kilo = 0;
	miles = 1.6093440;
	scanf("%7lf", &kilo);
	printf("%7lf", kilo/miles);
}
