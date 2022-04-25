/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:21:05 by suekang           #+#    #+#             */
/*   Updated: 2022/04/25 16:16:56 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_specifer(t_list *ap, const char format)
{
	if (format == 'c')
		if_char(ap);
	else if (format == 's')
		if_str(ap);
	else if (format == 'p')
		if_pointer(ap);
	else if (format == 'u')
		if_unsigned_int(ap);
	else if (format == 'i' || format == 'd')
		if_int(ap);
	else if (format == 'x' || format == 'X')
		if_hex(ap, format);
	else if (format == '%')
		if_percent(ap);
	else if (format == '\0')
		return ;
	else
		if_elsechar(ap, format);
}

static void	parse_specifer(t_list *ap, const char *format)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			check_specifer(ap, format[++i]);
		else
		{
			ft_putchar_fd(format[i], 1);
			ap->count++;
		}
		i++;
	}
}

int	ft_printf(const char *format, ...)
{
	t_list	*ap;
	int		resultprint;

	ap = (t_list *)malloc(sizeof(t_list));
	if (!ap)
		return (0);
	ap->count = 0;
	resultprint = 0;
	va_start(ap->args, format);
	parse_specifer(ap, format);
	resultprint = ap->count;
	va_end(ap->args);
	free(ap);
	return (resultprint);
}
