# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suekang <suekang@student.42seoul>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 16:03:24 by suekang           #+#    #+#              #
#    Updated: 2021/11/23 18:10:43 by suekang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RM = rm -f
AR = ar
RCS = rcs
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

SRCS =  ft_isalpha      \
        ft_isdigit      \
        ft_isalnum      \
        ft_isascii      \
        ft_isprint      \
        ft_strlen       \
        ft_memset       \
        ft_bzero        \
        ft_memcpy       \
        ft_memmove      \
        ft_strlcpy      \
        ft_strlcat      \
        ft_toupper      \
        ft_tolower      \
        ft_strchr       \
        ft_strrchr      \
        ft_memchr       \
        ft_memcmp       \
        ft_strnstr      \
        ft_atoi         \
        ft_calloc       \
        ft_strdup       \
        ft_substr       \
        ft_strjoin      \
        ft_strtrim      \
        ft_split        \
        ft_itoa         \
        ft_strmapi      \
        ft_striteri     \
        ft_putchar_fd   \
        ft_putstr_fd    \
        ft_putendl_fd   \
        ft_putnbr_fd    \

OBJS = $(SRCS:.c=o)

$(NAME) : $(OBJS)
        $(AR) $(RCS) $@ $^
	
%.o : %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re : fclean all

.PHONY: all clean fclean re
