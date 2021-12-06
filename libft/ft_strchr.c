/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:43:02 by suekang           #+#    #+#             */
/*   Updated: 2021/12/06 15:43:03 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	find;

	i = 0;
	find = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)s[i]);
		i++;
	}
	return (NULL);
}
