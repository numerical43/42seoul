/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:21:39 by suekang           #+#    #+#             */
/*   Updated: 2022/03/24 16:43:25 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

typedef struct s_list
{
  va_list args;
  int count;
} s_list;

int	  ft_printf(const char *format, ...);
void  ifchar(s_list ap);
void  ifstr(s_list ap);
void  ifhex(s_list ap);
void  ifint(s_list ap);
void  ifpointer(s_list ap);
void  ifpercent(s_list ap);
void  ifunsignedint(s_list ap);
void  ifelsechar(s_list ap, const char format);
char	*ft_unsigned_itoa(unsigned int n);
static int	count_index(unsigned int n);
static void	make_hex(unsigned int num, int strlen);

#endif
