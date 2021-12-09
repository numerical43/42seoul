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

char	*ft_strstrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*c;

	first = 0;
	last = ft_strlen(s1) - 1;
	c = (char *)malloc(sizeof(char *));
	if (!s1)
		return (NULL);
	while (s1[start] && (s1[start] == set[start]))
		start++;
	while (s1[last] && (s1[last] == set[
}
