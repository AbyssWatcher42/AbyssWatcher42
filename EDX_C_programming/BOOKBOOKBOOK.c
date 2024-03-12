/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BOOKBOOKBOOK.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 04:34:00 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/23 04:34:05 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    double wallet;
    double price;
    int total;
    
    wallet = 0;
    price = 0;
    total = 0;
    scanf("%lf", &wallet);
    scanf("%lf", &price);
    total = wallet / price;
    printf("%d", total);
}
