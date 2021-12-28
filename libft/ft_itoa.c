/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:10:55 by suekang           #+#    #+#             */
/*   Updated: 2021/12/28 22:43:38 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nblen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		return (++len);
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*c;
	int				len;
	unsigned int	nb;

	len = nblen(n);
	nb = (unsigned int)n;
	c = (char *)malloc(sizeof(char *) * (len + 1));
	if (c == NULL)
		return (NULL);
	if (nb == 0)
		c[0] = '0';
	if (n < 0)
	{
		c[0] = '-';
		nb = -nb;
	}
	c[len--] = nb % 10 + '0';
	while (nb)
	{
		c[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (c);
}
