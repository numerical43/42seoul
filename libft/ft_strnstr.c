/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:14:26 by suekang           #+#    #+#             */
/*   Updated: 2022/01/02 19:56:54 by hdoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		if ((big[i] == little[j]) && (i + j < len))
		{
			if (!little)
				return ((char *)&(big[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}
