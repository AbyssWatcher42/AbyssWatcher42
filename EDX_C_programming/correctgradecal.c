/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correctgradecal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 02:53:54 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/23 02:55:21 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int i;
	int choose_num;
	int cur_num;
	double total_num;
	double num4;
	double ans;


	i = 0;
	choose_num = 0;
	total_num = 0;
	num4 = 0;
	scanf("%d", &choose_num);
	num4 = choose_num;
	while (i < choose_num)
	{
	    cur_num = 0;
		scanf("%d", &cur_num);
		total_num += cur_num;
		i++;
	}
	ans = total_num/num4;
	printf("%.2lf", (double)ans);
}
