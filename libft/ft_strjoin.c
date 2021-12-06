/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:43:29 by suekang           #+#    #+#             */
/*   Updated: 2021/12/06 15:43:30 by suekang          ###   ########.fr       */
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
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	c = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!s1 == !s2)
		return (NULL);
	if (c == NULL)
		return (NULL);
	while (i++ < s1_len)
		c[i] = s1[i];
	while (i++ < (s1_len + s2_len))
		c[i] = s2[i - s1_len];
	c[i] = '\0';
	return (c);
}
