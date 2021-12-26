/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:14:42 by suekang           #+#    #+#             */
/*   Updated: 2021/12/09 20:17:02 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if(set[i] == c)
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
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[front] && (s1[front] == set[front]))
		front++;
	while ((front < end) && check(s1[end - 1], set))
		end--;
	c = (char *)malloc(sizeof(char) * (end - front + 1));
	if (c == NULL)
		return (NULL);
	while (front < end)
		c[i++] = s1[front++];
	c[i] = '\0';
	return (c);
}
