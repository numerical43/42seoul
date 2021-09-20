/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:15:25 by suekang           #+#    #+#             */
/*   Updated: 2021/09/20 17:12:10 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *comb, char *bomc)
{
	write(1, comb, 2);
	write(1, " ", 1);
	write(1, bomc, 2);
	if (bomc[0] != '9' || bomc[1] != '9' || comb[0] != '9' || comb[1] != '8')
		write(1, ", ", 2);
}

void	ft_print(char *comb, char *bomc)
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
			ft_print(comb, bomc);
			comb[1]++;
		}
		comb[0]++;
		comb[1] = '0';
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
