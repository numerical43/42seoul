/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:11:30 by suekang           #+#    #+#             */
/*   Updated: 2021/12/09 20:38:31 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t				i;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (!destination || !source)
		return (NULL);
	if (destination < source)
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	else
		while (i < num)
		{
			destination[num - i - 1] = source[num - i - 1];
			i++;
		}
	return (dest);
}

src = hello

dest = hello

src = ello

dest hello

hello

hello


