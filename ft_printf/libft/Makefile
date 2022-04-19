# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suekang <suekang@student.42seoul>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 16:03:24 by suekang           #+#    #+#              #
#    Updated: 2022/03/19 13:37:08 by suekang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RM = rm -f
AR = ar
RCS = rcs
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
INCLUDES = libft.h

SRCS = ft_strlen.c       \
		ft_atoi.c         \
		ft_itoa.c         \
		ft_putchar_fd.c   \
		ft_putstr_fd.c    \

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(RCS) $@ $^

%.o : %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
