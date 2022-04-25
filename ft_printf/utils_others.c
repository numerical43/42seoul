/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_others.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:05:29 by suekang           #+#    #+#             */
/*   Updated: 2022/04/25 17:17:42 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_index(unsigned int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*c;
	int		i;

	i = count_index(n);
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	c[i--] = '\0';
	if (n == 0)
		c[0] = '0';
	while (n)
	{
		c[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (c);
}

char	*make_hex(unsigned long num, int strlen)
{
	char			*hex;
	unsigned long	temp;

	temp = num;
	while (temp >= 16)
	{
		temp = temp / 16;
		strlen++;
	}
	hex = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!hex)
		return (NULL);
	hex[strlen] = '\0';
	return (hex);
}

int	count_hex_len(unsigned long num)
{
	unsigned long	temp;
	int			strlen;

	temp = num;
	strlen = 0;
	while (temp >= 16)
	{
		temp = temp / 16;
		strlen++;
	}
	return (strlen);
}
