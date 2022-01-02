/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:12:28 by suekang           #+#    #+#             */
/*   Updated: 2022/01/02 19:46:47 by hdoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_m(char **str, size_t count)
{
	size_t	i;

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

char	*in_index(char *str, char const *s, int j, int strlen)
{
	int	i;

	i = 0;
	while (strlen > 0)
	{
		str[i] = s[j - strlen];
		i++;
		strlen--;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_sep(char **str, char const *s, char c, int count)
{
	int	i;
	int	j;
	int	strlen;

	i = 0;
	j = 0;
	while (s[j++] && (i++ < count))
	{
		strlen = 0;
		while (s[j] && s[j] != c)
			strlen++;
		str[i] = (char *)malloc(sizeof(char *) * (strlen + 1));
		if (!str[i])
		{
			free_m(str, i);
			return (NULL);
		}
		in_index(str[i], s, j, strlen);
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;

	if (!s)
		return (NULL);
	count = count_str(s, c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	ft_sep(str, s, c, count);
	return (str);
}
