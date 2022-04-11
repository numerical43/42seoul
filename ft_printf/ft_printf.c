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

void	check_specifer(s_list *ap, const char format)
{
	if (format == 'c')
		ifchar(ap);
	else if (format == 's')
		ifstr(ap);
	else if (format == 'p')
		ifpointer(ap);
	else if (format == 'u')
		ifunsignedint(ap);
	else if (format == 'i' || format == 'd')
		ifint(ap);
	else if (format == 'x' || format == 'X')
		ifhex(ap);
	else if (format == '%')
		ifpercent(ap);
	else if (format == '\0')
		return ;
	else
		ifelsechar(format, ap);
}

void	parse_specifer(s_list *ap, const char format)
{
	while(!format)
	{
		if (format == '%')
			check _specifer(format, ap);
		else 
			ft_putchar_fd(format, 1);
		va_arg(ap->args, unsigned char);
	}
}

int	ft_printf(const char *format, ...)
{
	s_list	*ap;
	int	resultprint;
	
	ap = (s_list *)malloc(sizeof(s_list));
	if (!ap)
		return (NULL);
	ap->count = 0;
	resultprint = 0;
	va_start(ap->args, format);
	parse_specifer(ap->args, format);
	resultprint = ap->count;
	va_end(ap->args);
	free(ap);
	return (resultprint);
}
void main()
{
	
}
