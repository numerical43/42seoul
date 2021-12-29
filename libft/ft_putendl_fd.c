/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:11:52 by suekang           #+#    #+#             */
/*   Updated: 2021/12/09 20:17:01 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;
	
	i = 0;
	if (fd < 0)
		return (NULL);
	while (s[i])
	{
		write(fd, s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
