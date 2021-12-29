/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:11:30 by suekang           #+#    #+#             */
/*   Updated: 2021/12/28 22:43:56 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!d || !s)
		return (NULL);
	if (d < s)
	{
		while (i++ < n)
			d[i] = s[i];
	}
	else
	{
		while (i++ < n)
			d[n - i - 1] = s[n - i - 1];
	}
	return (dest);
}
