/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_if_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:12:30 by suekang           #+#    #+#             */
/*   Updated: 2022/04/25 17:38:24 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	if_int(t_list *ap)
{
	char	*result;
	int		num;

	num = va_arg(ap->args, int);
	result = ft_itoa(num);
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
	free(result);
}

void	if_unsigned_int(t_list *ap)
{
	char			*result;
	unsigned int	num;

	num = va_arg(ap->args, unsigned int);
	result = ft_unsigned_itoa(num);
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
	free(result);
}

void	if_hex(t_list *ap, char c)
{
	unsigned long	num;
	char			*result;
	int				i;

	i = 1;
	num = va_arg(ap->args, unsigned long);
	result = make_hex(num, i);
	i = count_hex_len(num);
	while (i >= 0)
	{
		if ((num % 16) < 10)
			result[i] = '0' + (num % 16);
		else if (c == 'x')
			result[i] = 'a' - 10 + (num % 16);
		else if (c == 'X')
			result[i] = 'A' - 10 + (num % 16);
		num = num / 16;
		i--;
	}
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
	free(result);
}

void	if_pointer_print(char *result, unsigned long num, int i)
{
	while (i >= 0)
	{
		if (num % 16 < 10)
			result[i] = '0' + (num % 16);
		else
			result[i] = 'a' - 10 + (num % 16);
		num = num / 16;
		i--;
	}
	ft_putstr_fd(result, 1);
}

void	if_pointer(t_list *ap)
{
	int				i;
	char			*result;
	unsigned long	num;

	num = va_arg(ap->args, unsigned long);
	if (!num && num != 0)
	{
		ft_putstr_fd("(nil)", 1);
		ap->count = ap->count + 5;
		return ;
	}
	result = make_hex(num, 1);
	i = count_hex_len(num);
	ft_putstr_fd("0x", 1);
	if_pointer_print(result, num, i);
	ap->count = ap->count + ft_strlen(result) + 2;
	free(result);
}
