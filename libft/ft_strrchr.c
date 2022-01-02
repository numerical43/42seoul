/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:14:35 by suekang           #+#    #+#             */
/*   Updated: 2022/01/02 19:56:53 by hdoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	find;
	size_t	i;

	i = ft_strlen(s) - 1;
	find = (size_t)c;
	if (s)
	{
		while (i >= 0)
		{
			if (s[i] == find)
				return ((char *)&(s[i]));
			i--;
		}
	}
	return (NULL);
}
