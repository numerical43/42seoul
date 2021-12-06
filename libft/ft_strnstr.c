/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:44:21 by suekang           #+#    #+#             */
/*   Updated: 2021/12/06 15:44:23 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return (big);
	while (i < len && big[i])
	{
		j = 0;
		if ((big[i] == little[j]) && (i + j < len))
		{
			if (!little)
				return ((char *)big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
