/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:15:43 by suekang           #+#    #+#             */
/*   Updated: 2022/01/15 18:00:01 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	slen;

	if (!s)
		return (NULL);
	if (ft_strlen(s) > len)
		slen = len;
	else
		slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	c = (char *)malloc(sizeof(char) * (slen + 1));
	if (!c)
		return (NULL);
	ft_strlcpy(c, s + start, slen + 1);
	return (c);
}
