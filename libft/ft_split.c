/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:12:28 by suekang           #+#    #+#             */
/*   Updated: 2022/01/15 18:22:30 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_mem(char **result, int count)
{
	int	i;

	i = 0;
	while (i <= count)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

int	count_word(char const *s, char c)
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

char	*make_word(char *word, const char *s, int j, int word_len)
{
	int	i;

	i = 0;
	while (word_len > 0)
	{
		word[i] = s[j - word_len];
		i++;
		word_len--;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_sep(char **result, const char *s, char c, int word_count)
{
	int	i;
	int	j;
	int	word_len;

	i = 0;
	j = 0;
	while (s[i] && i < word_count)
	{
		word_len = 0;
		while (s[j] && s[j] == c)
			j++;	
		while (s[j] && s[j] != c)
		{
			j++;
			word_len++;
		}
		result[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!result[i])
		{
			free_mem(result, i);
			return (NULL);
		}
		make_word(result[i], s, j, word_len);
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int	word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	ft_sep(result, s, c, word_count);
	return (result);
}
