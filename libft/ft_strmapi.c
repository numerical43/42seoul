/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:14:15 by suekang           #+#    #+#             */
/*   Updated: 2021/12/09 20:17:02 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	size_t	strlen;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	strlen = ft_strlen(s);
	c = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!c)
		return (NULL);
	while (i < strlen)
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
