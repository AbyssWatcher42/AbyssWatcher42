/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 06:46:38 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/06 19:04:56 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			s_len;
	char			*res;
	unsigned int	i;

	i = -1;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	res = ft_calloc(s_len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (++i < s_len)
		res[i] = f(i, s[i]);
	return (res);
}
