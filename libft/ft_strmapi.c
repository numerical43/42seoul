/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:44:11 by suekang           #+#    #+#             */
/*   Updated: 2021/12/06 15:44:13 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	size_t	strlen;
	size_t	i;

	i = 0;
	strlen = ft_strlen(s);
	c = (char *)malloc(sizeof(char) * (strlen + 1));
	if (c == NULL)
		return (NULL);
	if (!s || !f)
		return (NULL);
	while (i < strlen)
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
