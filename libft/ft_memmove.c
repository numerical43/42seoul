/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:11:30 by suekang           #+#    #+#             */
/*   Updated: 2022/01/02 20:48:21 by hdoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (dest < src)
	{
		while (i < n)
			((char *)dest)[i] = ((char *)src)[i];
	}
	else
	{
		while (i++ < n)
			((char *)dest)[n - i - 1] = ((char *)src)[n - i - 1];
	}
	return (dest);
}
