/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <seukang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:03:08 by suekang           #+#    #+#             */
/*   Updated: 2022/03/18 15:58:43 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	size_t	strlen;

	strlen = 0;
	if (!str)
		return (strlen);
	while (str[strlen])
		strlen++;
	return (strlen);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	if (!src)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		if (src[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

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
	free((char *)s1);
	return (c);
}

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	find;

	i = 0;
	find = (unsigned char)c;
	if (!s)
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
