/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 01:21:19 by suekang           #+#    #+#             */
/*   Updated: 2021/09/26 01:21:21 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count_len(char *c)
{
	unsigned int	len;

	len = 0;
	while (c[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	dest_len = count_len(dest);
	src_len = count_len(src);
	if (size < dest_len + 1)
		return (src_len + size);
	if (size > dest_len + 1)
	{
		while ((dest_len + i < size - 1) && src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
