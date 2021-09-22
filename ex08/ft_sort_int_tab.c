/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:58:14 by suekang           #+#    #+#             */
/*   Updated: 2021/09/22 23:05:31 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= size - 1)
	{
		j = 0;
		while (j <= size - 1)
		{	
			if (tab[j] > tab[j+1])
			{
				temp = tap[j];
				tap[j] = tab[j + 1];
				tap[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
