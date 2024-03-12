/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 05:28:11 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/06 18:57:25 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_allocate_res(char const *s, char c, size_t *word_count)
{
	int		count;
	int		inside;
	char	**res;

	count = 0;
	inside = 0;
	res = 0;
	while (*s)
	{
		if (*s != c && !inside)
		{
			inside = 1;
			count++;
		}
		else if (*s == c && inside)
		{
			inside = 0;
		}
		s++;
	}
	res = (char **)malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	*word_count = count;
	return (res);
}

static char	*ft_create_word(char const *s, char c, size_t *len)
{
	const char	*start;
	const char	*end;

	while (*s && *s == c)
		s++;
	start = s;
	while (*s && *s != c)
		s++;
	end = s;
	*len = end - start;
	return ((char *)start);
}

static char	**ft_free(char **arr, int words)
{
	int	i;

	i = 0;
	while (i < words && arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words;
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	if (!s)
		return (NULL);
	res = ft_allocate_res(s, c, &words);
	if (!res)
		return (NULL);
	while (i < words)
	{
		s = ft_create_word(s, c, &len);
		res[i] = (char *)malloc (sizeof(char) * (len + 1));
		if (!res[i])
			return (ft_free(res, i));
		ft_strlcpy(res[i], s, len + 1);
		res[i][len] = '\0';
		s += len;
		i++;
	}
	res[words] = NULL;
	return (res);
}
