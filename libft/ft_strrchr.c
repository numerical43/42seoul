/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:14:35 by suekang           #+#    #+#             */
/*   Updated: 2022/01/15 14:55:19 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	find;
	int		i;

	i = (int)(ft_strlen(s));
	find = (char)c;
	if (s)
	{
		while (i >= 0)
		{
			if (s[i] == find)
				return ((char *)s + i);
			i--;
		}
	}
	return (0);
}
