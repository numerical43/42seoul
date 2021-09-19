/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykim <taeykim@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:19:02 by taeykim           #+#    #+#             */
/*   Updated: 2021/09/19 19:19:04 by taeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print(int *board, int *flag)
{
	int		index;
	char	c;

	if (*flag == 0)
	{
		index = 0;
		while (index < 16)
		{
			c = board[index] + '0';
			write(1, &c, 1);
			if ((index + 1) % 4 == 0 && index != 0)
				write(1, &"\n", 1);
			else
				write(1, &" ", 1);
			index++;
		}
		*flag = 1;
	}
}

int	ft_num_check(int *board, int offset)
{
	int	index;

	if (offset % 4 == 0)
	{	
		return (1);
	}
	index = (offset / 4) * 4;
	while (index < offset)
	{
		if (board[index] == board[offset])
		{
			return (0);
		}
		index++;
	}
	return (1);
}

int	ft_num_check_up(int *board, int offset)
{
	int	row;
	int	col;
	int	index;

	row = 0;
	col = offset % 4;
	while (row < offset / 4)
	{
		index = (row * 4) + col;
		if (board[index] == board[offset])
			return (0);
		row++;
	}
	return (1);
}

void	ft_input(int *board, int *check, int offset, int *flag)
{
	int	index;

	if (offset == 16)
	{
		ft_print(board, flag);
		return ;
	}
	index = 0;
	while (index < 4)
	{	
		board[offset] = index + 1;
		if (!(ft_num_check(board, offset)))
		{
			index++;
			continue ;
		}
		if (offset >= 4 && !ft_num_check_up(board, offset))
		{
			index++;
			continue ;
		}
		ft_input_flag(board, check, offset, flag);
		index++;
	}
}

void	ft_input_flag(int *bo, int *ch, int of, int *flag)
{
	if (of == 15)
	{
		if (ft_check_ud(bo, ch, of, 0) && ft_check_ud(bo, ch, of, 1))
			if (ft_check_lr(bo, ch, of, 2) && ft_check_lr(bo, ch, of, 3))
				ft_input(bo, ch, of + 1, flag);
	}
	else if (of >= 12)
	{
		if (ft_check_ud(bo, ch, of, 0) && ft_check_ud(bo, ch, of, 1))
		{		
			ft_input(bo, ch, of + 1, flag);
		}
	}
	else if (of % 4 == 4 - 1)
	{
		if (ft_check_lr(bo, ch, of, 2) && ft_check_lr(bo, ch, of, 3))
		{
			ft_input(bo, ch, of + 1, flag);
		}
	}
	else
	{
		ft_input(bo, ch, of + 1, flag);
	}
}
