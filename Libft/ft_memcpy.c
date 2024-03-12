/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:40:49 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/06 19:32:11 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

/*int	main(void)
{
	char source_buffer[11] = {"Hello guys"};
	char destination_buffer[11];
	ft_memcpy(destination_buffer, source_buffer, 5);

	printf("source buffer: %s\n", source_buffer);
	printf("destination buffer: %s\n", destination_buffer);
}*/
