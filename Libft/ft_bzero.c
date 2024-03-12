/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:05:35 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/02/24 00:57:56 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char buffer[11] = {"Hello guys"};
	printf("b4 bzero: %s\n", buffer);

	ft_bzero(buffer, 5);
	printf("after bzero: %s\n", buffer);

	int n = -1;
	while (++n < 11)
	{
		printf("n: %d\t", n);
		if (buffer[n] == 0)
			printf("null");
		printf("%c\n", buffer[n]);
	}
	return (0);
}*/
