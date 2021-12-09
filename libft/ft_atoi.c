/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:06:23 by suekang           #+#    #+#             */
/*   Updated: 2021/12/09 18:16:36 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_space(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0') && (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == ' ' || str[i] == '\r'))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long	num;
	long	sign;
	int		i;

	num = 0;
	sign = 1;
	i = check_space(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	if (num > 2147483647 && sign == 1)
		return (-1);
	if (num < 2147483648 && sign == -1)
		return (0);
	num *= sign;
	return (num);
}
