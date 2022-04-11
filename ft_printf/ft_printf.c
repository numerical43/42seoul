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

parse_frmtspecifer(va_list ap, const char *format)
{
	while(!ap)
	{
		va_arg(ap, format);
		if (ap == '%')
		{
			va_arg(ap, format);
			break ;
		}
	}
	
}

int	ft_printf(const char *format, ...)
{
	va_list	*ap;
	int	resultprint;
	
	resultprint = 0;
	init_ap(ap);
	va_start(ap->arg, format);
	parse_specifer(ap->arg, format);
	va_end(ap);
	return ();
}
void main()
{
	
}
