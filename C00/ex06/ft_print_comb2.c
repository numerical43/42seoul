/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:26:37 by suekang           #+#    #+#             */
/*   Updated: 2021/09/23 15:03:48 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char *comb, char *bomc)
{
	write(1, comb, 2);
	write(1, " ", 1);
	write(1, bomc, 2);
	if (comb[0] != '9' || comb[1] != '8' || bomc[0] != '9' | bomc[1] != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_bomc(char *comb, char *bomc)
{
	while (bomc[0] <= '9')
	{
		while (bomc[1] <= '9')
		{
			ft_putchar(comb, bomc);
			bomc[1]++;
		}
		bomc[0]++;
		bomc[1] = '0';
	}
	comb[1]++;
}

void	ft_print_comb2(void)
{
	char	comb[2];
	char	bomc[2];

	comb[0] = '0';
	comb[1] = '0';
	while (comb[0] <= '9')
	{
		while (comb[1] <= '9')
		{
			bomc[0] = comb[0];
			bomc[1] = comb[1] + 1;
			ft_print_bomc(comb, bomc);
		}
		comb[0]++;
		comb[1] = '0';
	}
}
