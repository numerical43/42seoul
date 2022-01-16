/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:10:55 by suekang           #+#    #+#             */
/*   Updated: 2022/01/15 13:47:25 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbindex(int n)
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

char	*ft_itoa(int n)
{
	char			*c;
	int				i;
	unsigned int	nb;

	i = nbindex(n);
	nb = (unsigned int)n;
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	c[i--] = '\0';
	if (nb == 0)
		c[0] = '0';
	if (n < 0)
	{
		c[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		c[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (c);
}
