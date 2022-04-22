/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_not_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:17:13 by suekang           #+#    #+#             */
/*   Updated: 2022/04/22 17:17:14 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	if_char(t_list *ap)
{
	char	result;

	result = va_arg(ap->args, int);
	ft_putchar_fd(result, 1);
	ap->count++;
}

void	if_str(t_list *ap)
{
	char	*result;

	result = va_arg(ap->args, char *);
	if (!result)
	{
		ft_putstr_fd("(null)", 1);
		ap->count = ap->count + 6;
	}
	else
	{
		ft_putstr_fd(result, 1);
		ap->count = ap->count + ft_strlen(result);
	}
}

void	if_elsechar(t_list *ap, const char format)
{
	ft_putchar_fd(format, 1);
	ap->count++;
}

void	if_percent(t_list *ap)
{
	ft_putchar_fd('%', 1);
	ap->count++;
}
