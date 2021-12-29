/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:12:51 by suekang           #+#    #+#             */
/*   Updated: 2021/12/09 20:17:01 by suekang          ###   ########.fr       */
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
			return ((char *)(&s[i]));
		i++;
	}
	if ((unsigned char)c == s[i])
		return ((char *)(&s[i]));
	return (NULL);
}
