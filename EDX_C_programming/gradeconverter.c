/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gradeconverter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 00:56:48 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/23 01:10:32 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int i;
	int choose_num;
	double cur_num;
	double total_num;


	i = 0;
	choose_num = 0;
	total_num = 0;
	printf("Choose num of grades: ");
	scanf("%d", &choose_num);
	while (i < choose_num)
	{
		cur_num = 0;
		scanf("%lf", &cur_num);
		total_num += cur_num / 4;
		i++;
	}
	printf("%.2lf", (double)total_num);
}
