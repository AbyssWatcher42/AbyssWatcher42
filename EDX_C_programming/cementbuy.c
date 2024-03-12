/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cementbuy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:02:54 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/23 05:39:35 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    double cement_need;
    const int cement_weight = 120;
    const int cement_cost = 45;
    int bag_need;
    int total_cost;
    
    cement_need = 0;
    bag_need = 0;
    total_cost = 0;

    scanf("%lf", &cement_need);

    bag_need = (int)(cement_need / cement_weight);

    if (cement_need > bag_need * cement_weight)
    {
	    bag_need++;
    }
    total_cost = bag_need * cement_cost;
    printf("%d", total_cost);
    return (0);
}
