/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fknrobot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:57:43 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/22 02:41:49 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int num_bot;
	int engine_pw;
	int resistance;
	int weight;
	int height;
	int i;
	int total;
	int counter;


	num_bot	= 	0;
	engine_pw = 	0;
	resistance = 	0;
	weight =	0;
	height =	0;
	i = 		0;
	total = 	0;
	counter =	0;
	printf("num of bots : ");
	scanf("%d", &num_bot);
	while(++i <= num_bot)
	{
	++counter;
	printf("this is bot %d : engine power + resistance * weight - height\n", counter);
	scanf("%d %d %d %d", &engine_pw, &resistance, &weight, &height);
	total += (resistance - engine_pw)*(weight + height);
	}
	printf ("answer : %d\n", total);
	return (0);
}
