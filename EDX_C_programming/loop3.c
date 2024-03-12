/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 22:36:17 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/21 22:52:34 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void) {

    int i;

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+\n");

    for (i = 0; i < 3; i++)
    {
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
    }

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+");

    return(0);
}
