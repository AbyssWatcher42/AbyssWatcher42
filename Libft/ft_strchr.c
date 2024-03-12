/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:13:07 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/06 19:22:13 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	i;

	i = (char) c;
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (*s == i)
		return ((char *) s);
	return (NULL);
}
