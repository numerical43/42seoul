/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:21:05 by suekang           #+#    #+#             */
/*   Updated: 2022/03/24 17:20:55 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_specifer(my_list *ap, const char format)
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

static void	parse_specifer(my_list *ap, const char *format)
{
	int	i;
	
	i = 0;
	while(format[i])
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
	my_list	*ap;
	int	resultprint;
	
	ap = (my_list *)malloc(sizeof(my_list));
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
