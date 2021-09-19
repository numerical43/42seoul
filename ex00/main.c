/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykim <taeykim@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:19:59 by taeykim           #+#    #+#             */
/*   Updated: 2021/09/19 19:20:02 by taeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	check_input(char *str)
{
	int	i;
	int	cnt;
	int	space;

	i = 0;
	cnt = 0;
	space = 0;
	while (str[i])
	{
		if ('1' <= str[i] && str[i] <= '4' && (i % 2 == 0))
			cnt++;
		else if (str[i] == ' ' && (i % 2 == 1))
			space++;
		i++;
	}
	if (i != 31 || cnt != 16 || space != 15)
		return (0);
	return (1);
}

int	*ft_split(char *str, int *check)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if ('1' <= str[i] && str[i] <= '4')
		{
			check[cnt] = str[i] - '0';
			cnt++;
		}
		i++;
	}
	return (check);
}

int	main(int argc, char **argv)
{
	char	*input;
	int		*check;
	int		*board;
	int		*flag;
	int		index;

	if (argc != 2 || !(check_input(argv[1])))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	input = argv[1];
	check = (int *)malloc(sizeof(int) * 16);
	check = ft_split(input, check);
	board = (int *)malloc(sizeof(int) * 16);
	index = 0;
	flag = &index;
	ft_input(board, check, 0, flag);
	if (*flag == 0)
		write(1, &"Error\n", 6);
	free(check);
	free(board);
}
