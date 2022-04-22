/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:21:39 by suekang           #+#    #+#             */
/*   Updated: 2022/04/22 17:25:57 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_list
{
	va_list	args;
	int		count;
}	t_list;

int		ft_printf(const char *format, ...);
void	if_char(t_list *ap);
void	if_str(t_list *ap);
void	if_hex(t_list *ap, char c);
void	if_int(t_list *ap);
void	if_pointer(t_list *ap);
void	if_percent(t_list *ap);
void	if_unsigned_int(t_list *ap);
void	if_elsechar(t_list *ap, const char format);
char	*ft_unsigned_itoa(unsigned int n);
int		count_index(unsigned int n);
char	*make_hex(unsigned long num, int strlen);

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int c);
size_t	ft_strlen(const char *str);

#endif
