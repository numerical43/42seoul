/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:26:41 by suekang           #+#    #+#             */
/*   Updated: 2021/12/06 15:26:43 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	int				i;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (!destination || !source)
		return (NULL);
	while (i <= n)
	{
		*destination[i] = *source[i];
		i++;
	}
	return (dest);
}
