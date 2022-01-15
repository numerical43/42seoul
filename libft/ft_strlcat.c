/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:13:32 by suekang           #+#    #+#             */
/*   Updated: 2022/01/15 15:51:33 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	i;
	size_t	result;

	i = 0;
	if (!dest || !src)
		return (0);
	destlen = ft_strlen(dest);
	if (destlen > size)
		return (ft_strlen(src) + size);
	result = ft_strlcpy(dest + destlen, src, size - destlen) + destlen;
	return (result);
}
