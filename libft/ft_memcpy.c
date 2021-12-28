/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:11:25 by suekang           #+#    #+#             */
/*   Updated: 2021/12/09 20:17:01 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*destination;
	unsigned char	*source;

	i = 0;
	if (!dest || !src)
		return (NULL);
	destination = (unsigned char*)dest;
	source = (unsigned char*)src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
