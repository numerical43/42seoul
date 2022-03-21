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

SRCS =  ft_isdigit.c      \
		ft_isalnum.c      \
		ft_isascii.c      \
		ft_isprint.c      \
		ft_strlen.c       \
		ft_memset.c       \
		ft_bzero.c        \
		ft_memcpy.c       \
		ft_memmove.c      \
		ft_strlcpy.c      \
		ft_strlcat.c      \
		ft_strncmp.c	  \
		ft_toupper.c      \
		ft_tolower.c      \
		ft_strchr.c       \
		ft_strrchr.c      \
		ft_memchr.c       \
		ft_memcmp.c       \
		ft_strnstr.c      \
		ft_atoi.c         \
		ft_calloc.c       \
		ft_isalpha.c	  \
		ft_strdup.c       \
		ft_substr.c       \
		ft_strjoin.c      \
		ft_strtrim.c      \
		ft_split.c        \
		ft_itoa.c         \
		ft_strmapi.c      \
		ft_striteri.c     \
		ft_putchar_fd.c   \
		ft_putstr_fd.c    \
		ft_putendl_fd.c   \
		ft_putnbr_fd.c

SRCS_B = ft_lstadd_back.c	\
		 ft_lstadd_front.c	\
		 ft_lstclear.c		\
		 ft_lstdelone.c		\
		 ft_lstiter.c		\
		 ft_lstlast.c		\
		 ft_lstmap.c		\
		 ft_lstnew.c		\
		 ft_lstsize.c

OBJS = $(SRCS:.c=.o)

OBJS_B = $(SRCS_B:.c=.o)

ifdef B_FLAG
	OBJS_ALL = $(OBJS_B) $(OBJS)
else
	OBJS_ALL = $(OBJS)
endif

$(NAME) : $(OBJS)
	$(AR) $(RCS) $@ $^

%.o : %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

all: $(NAME)

bonus: $(OBJS_B)
	make B_FLAG=1 all

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
