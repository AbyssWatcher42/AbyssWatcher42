/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Line_Counter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:27:50 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/01 11:41:24 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	main(void)
{
	int	c;
	int	nl;
	
	c = '\n';
	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	
	printf("%d\n", nl);
}

/* https://stackoverflow.com/questions/75676419/eof-and-ctrl-d */
