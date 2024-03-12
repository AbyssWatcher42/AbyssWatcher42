/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 00:42:01 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/06 19:29:04 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;
	size_t	len;

	if (nmemb > 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	len = nmemb * size;
	tmp = (void *)malloc(len);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, len);
	return (tmp);
}
