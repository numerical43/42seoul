/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:08:55 by suekang           #+#    #+#             */
/*   Updated: 2021/09/27 16:33:37 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	sqrt;
	unsigned int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (nb);
	sqrt = i * i;
	while (sqrt <= (unsigned int)nb)
	{
		i++;
		sqrt = i * i;
	}
	i -= 1;
	if (i * i != (unsigned int)nb)
		i = 0;
	return (i);
}
