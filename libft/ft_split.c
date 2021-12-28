/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:12:28 by suekang           #+#    #+#             */
/*   Updated: 2021/12/28 22:33:55 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	make_word(char *str, char const *s, int j, int strlen)
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

	j = 0;
	strlen = 0;
	while (s[i] && (i < count))
	{
		while (s[j])
		{
			if (s[j] != c)
				strlen++;
			j++;
		}
		str[i] = (char *)malloc(sizeof(char *) * (strlen + 1));
		if (!str[i])
			return (NULL);
		make_word(str[i], s, j, strlen);
		strlen = 0;
		i++;
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
	str = (char **)malloc(sizeof(char **) * (count + 1));
	ft_sep(str, s, c, count);
	return (str);
}
