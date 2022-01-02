/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:11:30 by suekang           #+#    #+#             */
/*   Updated: 2022/01/02 20:23:45 by hdoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (d < s)
	{
		while (i < n)
			d[i] = s[i];
	}
	else
	{
		while (i++ < n)
			d[n - i - 1] = s[n - i - 1];
	}
	return (dest);
}
