/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:14:42 by suekang           #+#    #+#             */
/*   Updated: 2022/01/24 22:15:51 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	front;
	size_t	end;
	char	*c;

	i = 0;
	front = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[front] && check(s1[front], set))
		front++;
	while ((front < end) && check(s1[end - 1], set))
		end--;
	c = (char *)malloc(sizeof(char) * (end - front + 1));
	if (!c)
		return (NULL);
	while (front < end)
		c[i++] = s1[front++];
	c[i] = '\0';
	return (c);
}
