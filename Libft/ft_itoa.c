/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsmeyer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 06:00:40 by stsmeyer          #+#    #+#             */
/*   Updated: 2024/03/06 19:20:53 by stsmeyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n / 10 != 0)
	{
		count++;
		n /= 10;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				digit;
	unsigned int	num;

	digit = ft_count_digit(n);
	res = ft_calloc(digit + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		num = n * -1;
	}
	else
		num = n;
	while (num != 0)
	{
		res[--digit] = num % 10 + '0';
		num /= 10;
	}
	if (n == 0)
		res[0] = '0';
	return (res);
}
