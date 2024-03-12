/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:59:44 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/05 14:30:51 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	char source_buffer[11] = {"Hello guys!"};
	char destination_buffer[11];

	ft_strlcpy(destination_buffer, source_buffer, 5);
	printf("Destination : %s\n", destination_buffer);

	ft_strlcpy(destination_buffer, source_buffer, 9);
        printf("Destination : %s\n", destination_buffer);
}*/
