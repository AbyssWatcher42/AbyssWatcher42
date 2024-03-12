/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hostel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:52:09 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/24 02:58:30 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int to_pay;
	int base_price;
	int late_for;

	to_pay = 0;
	base_price = 10;
	late_for = 0;
	scanf("%d", &late_for);
	if (late_for == 0)
	{
		printf("%d", base_price);
		return (0);
	}
	else if (late_for > 0)
	{
		to_pay = (late_for * 5) + base_price;
		if (to_pay > 53)
		{
			to_pay = 53;
			printf("%d", to_pay);
			return (0);	
		}
		printf("%d", to_pay);
		return(0);
	}
}

/*#include <stdio.h>
int main(void)
{
    int hour;
    int cost = 10;
    scanf("%d", &hour);
    cost += hour * 5;
    if (cost >= 53)
        cost = 53;
    printf("%d", cost);
    return 0;
}*/
