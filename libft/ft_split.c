/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:12:28 by suekang           #+#    #+#             */
/*   Updated: 2022/01/15 13:46:52 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_mem(char **str, int count)
{
	int	i;

	i = 0;
	while (i++ < count)
		free(str[i]);
	free(str);
	return (NULL);
}

int	count_str(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && (s[i] != c))
				i++;
		}
	}
	return (count);
}

char	*make_array(char *str, const char *p, int strlen)
{
	int	i;

	i = 0;
	while (strlen > 0)
	{
		str[i] = *p++;
		i++;
		strlen--;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_sep(char **str, const char *p, char c, int count)
{
	int	i;
	int	strlen;

	i = 0;
	while (i < count)
	{
		strlen = 0;
		while (*p == c)
			p++;
		while (p && *p != c)
			strlen++;
		str[i] = (char *)malloc(sizeof(char *) * (strlen + 1));
		if (!str[i])
		{
			free_mem(str, i);
			return (NULL);
		}
		make_array(str[i], p, strlen);
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	const char	*p;
	int		count;

	if (!s)
		return (NULL);
	count = count_str(s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	p = (const char *)s;
	ft_sep(str, p, c, count);
	return (str);
}
