/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:02:17 by suekang           #+#    #+#             */
/*   Updated: 2021/09/26 19:51:37 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned char n)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[n / 16]);
	ft_putchar(hex[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			print_hex((unsigned char)str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
