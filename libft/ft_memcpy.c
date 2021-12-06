/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:26:31 by suekang           #+#    #+#             */
/*   Updated: 2021/12/06 15:26:32 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i <= n)
	{
		if ((dest + i) == src || dest == (src - i))
		{
			ft_memmove(dest, src, n);
			return (dest);
		}
		*(unsigned char *)dest[i] = *(unsigned char *)src[i];
		i++;
	}
	return (dest);
}
