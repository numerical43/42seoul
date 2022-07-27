/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykim <taeykim@student.42Seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:43:32 by taeykim           #+#    #+#             */
/*   Updated: 2021/09/19 19:20:16 by taeykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <unistd.h>

int		ft_check_ud(int *board, int *check, int offset, int flag);
int		ft_check_lr(int *board, int *check, int offset, int flag);
void	ft_print(int *board, int *flag);
int		*ft_absort_lr(int *board, int offset, int *arr, int flag);
int		*ft_absort_ud(int *board, int offset, int *arr, int flag);
int		ft_sight(int *arr);
int		ft_num_check(int *board, int offset);
int		ft_num_check_up(int *board, int offset);
void	ft_input(int *board, int *check, int offset, int *flag);
void	ft_input_flag(int *board, int *check, int offset, int *flag);

#endif
