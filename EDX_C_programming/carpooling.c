/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carpooling.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:12:32 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/23 21:45:59 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    int passenger;
    double gas_cost;
    double answer;

    passenger = 0;
    gas_cost = 0;
    answer = 0;
    scanf("%d %lf", &passenger, &gas_cost);
    if (passenger == 0)
    {
        printf("%.2lf", gas_cost);
        return (0);
    }
    else if (passenger > 0)
    {
        answer = (double)(gas_cost + 1) / (passenger + 1);
        printf("%.2lf", answer);
        return (0);
    }
    else
    return(0);
}
