/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:30:16 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/06 18:59:41 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}

/*int	main(void)
{
	char	buffer[11] = {"Hello guys!"};
	printf("b4 memset: %s\n", buffer);

	ft_memset(buffer, 'A', 5);
	printf("After memset : %s\n", buffer);
	return (0);
}*/
