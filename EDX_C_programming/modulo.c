/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modulo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:47:11 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/23 00:11:59 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int input1;
	int input2;
	int ans_1;
	int ans_2;

	input1 = 0;
	input2 = 0;
	printf("1st q: ");
	scanf("%d", &input1);
	printf("2nd q: ");
	scanf("%d", &input2);
	ans_1 = input1 / input2;
	ans_2 = input1 % input2;
	printf("Answer 1 : %d\n", ans_1);
	printf("Answer 2 : %d\n", ans_2);
}
