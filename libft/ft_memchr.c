/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:11:10 by suekang           #+#    #+#             */
/*   Updated: 2021/12/09 20:17:01 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	while (i <= n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)str);
		i++;
	}
	return (0);
}
