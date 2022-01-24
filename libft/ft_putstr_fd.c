/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:12:17 by suekang           #+#    #+#             */
/*   Updated: 2022/01/24 22:10:50 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*c;
	size_t	i;

	i = 0;
	if (!s)
		return ;
	c = s;
	if (fd < 0)
		return ;
	while (c[i])
	{
		write(fd, &c[i], 1);
		i++;
	}
}
