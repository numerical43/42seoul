/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:14:26 by suekang           #+#    #+#             */
/*   Updated: 2022/01/15 17:05:59 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != 0 && i + j < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j < len))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
