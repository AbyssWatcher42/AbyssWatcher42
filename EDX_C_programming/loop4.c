/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 00:06:49 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/22 00:08:13 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    int i;
    
    i = 0;
    for(i = 0; i < 2; i++)
    {
        printf("%dx8 = %d\n",i , 8*i);
    }
    return (0);
}
