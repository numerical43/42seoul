/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:45:29 by suekang           #+#    #+#             */
/*   Updated: 2021/12/06 15:45:31 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#indef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_itoa();
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strlen(const char *str);
char	*ft_strup(char *src, int size);
int	tolower(int c);
int	ft_toupper(int c);
