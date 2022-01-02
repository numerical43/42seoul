/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:15:43 by suekang           #+#    #+#             */
/*   Updated: 2022/01/02 19:50:48 by hdoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;

	c = (char *)malloc(sizeof(char) * (len + 1));
	if (!c || !s)
		return (NULL);
	if (start == 0)
	{
		c[0] = '\0';
		return (c);
	}
	ft_strlcpy(c, (char *)&(s[start - 1]), len + 1);
	return (c);
}
