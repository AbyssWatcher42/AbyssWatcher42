/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 03:02:45 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/06 18:44:21 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((!dest && !src) || (n == 0))
		return (dest);
	if (dest - src > 0)
	{
		while (n > 0)
		{
			n--;
			((char *) dest)[n] = ((char *) src)[n];
		}
		return (dest);
	}
	while (i < n)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char source_buffer[4] = {"STOP"};
	char destination_buffer[7] = {"help me"};

	char dog_source[4] = {"STOP"};
	char dog_destination[7] = {"help me"};

	ft_memmove(destination_buffer, source_buffer, 2);
	printf("destination_buffer result: %s\n", destination_buffer);

	memmove(dog_destination, dog_source, 2);
	printf("real func destination_buffer result: %s\n", dog_destination);
}*/
