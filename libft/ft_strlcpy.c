/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:13:57 by suekang           #+#    #+#             */
/*   Updated: 2022/01/15 15:20:26 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (ft_strlen(src));
	if (size == 0)
		return (ft_strlen(src));
	while (src[i])
	{
		dest[i] = src[i];
		if (i == size - 1)
			break ;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
