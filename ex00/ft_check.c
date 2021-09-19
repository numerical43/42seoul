/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykim <taeykim@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:43:20 by taeykim           #+#    #+#             */
/*   Updated: 2021/09/19 17:43:22 by taeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_sight(int *arr)
{
	int	max;
	int	sight;
	int	i;

	i = 0;
	sight = 1;
	max = arr[0];
	while (i < 3)
	{
		if (max < arr[i + 1])
		{
			max = arr[i + 1];
			sight++;
		}
		i++;
	}
	return (sight);
}

int	*ft_absort_lr(int *board, int offset, int *arr, int flag)
{
	int	index;
	int	row;

	index = 0;
	row = (offset / 4) * 4;
	if (flag == 0)
	{
		while (index < 4)
		{
			arr[index] = board[row + index];
			index++;
		}
	}
	if (flag == 1)
	{
		while (index < 4)
		{
			arr[index] = board[row + 4 - index - 1];
			index++;
		}
	}
	return (arr);
}

int	*ft_absort_ud(int *board, int offset, int *arr, int flag)
{
	int	index;
	int	col;
	int	row;

	index = -1;
	row = 0;
	col = offset % 4;
	if (flag == 0)
	{
		while (++index < 4)
		{
			arr[index] = board[col + row];
			row += 4;
		}
	}
	else
	{
		row = 4 * (4 - 1);
		while (++index < 4)
		{
			arr[index] = board[row + col];
			row -= 4;
		}
	}
	return (arr);
}

int	ft_check_ud(int *board, int *check, int offset, int flag)
{
	int	*arr;

	arr = (int *)malloc(4 * 4);
	if (flag == 0)
	{
		arr = ft_absort_ud(board, offset, arr, 0);
		if (check[offset % 4] == ft_sight(arr))
		{
			free(arr);
			return (1);
		}
	}
	if (flag == 1)
	{
		arr = ft_absort_ud(board, offset, arr, 1);
		if (check[(offset % 4) + 4] == ft_sight(arr))
		{
			free(arr);
			return (1);
		}
	}
	free(arr);
	return (0);
}

int	ft_check_lr(int *board, int *check, int offset, int flag)
{
	int	*arr;

	arr = (int *)malloc(4 * 4);
	if (flag == 2)
	{	
		arr = ft_absort_lr(board, offset, arr, 0);
		if (check[(2 * 4) + (offset / 4)] == ft_sight(arr))
		{
			free(arr);
			return (1);
		}
	}
	if (flag == 3)
	{
		arr = ft_absort_lr(board, offset, arr, 1);
		if (check[3 * 4 + offset / 4] == ft_sight(arr))
		{
			free(arr);
			return (1);
		}
	}
	free(arr);
	return (0);
}
