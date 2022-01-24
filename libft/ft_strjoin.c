/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:13:20 by suekang           #+#    #+#             */
/*   Updated: 2022/01/24 22:09:58 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	c = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!c)
		return (NULL);
	while (i < s1_len)
	{
		c[i] = s1[i];
		i++;
	}
	while (i < (s1_len + s2_len))
	{
		c[i] = s2[i - s1_len];
		i++;
	}
	c[i] = '\0';
	return (c);
}
