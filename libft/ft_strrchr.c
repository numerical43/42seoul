/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:44:27 by suekang           #+#    #+#             */
/*   Updated: 2021/12/06 15:44:29 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	find;
	size_t	i;

	i = ft_strlen(s) - 1;
	find = (size_t)c;
	while (i >= 0)
	{
		if (s[i] == find)
			return ((char *)s[i]);
		i--;
	}
	return (NULL);
}
