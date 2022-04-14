NAME = libftprintf.a
RM = rm -f
AR = ar
RCS = rcs
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c      \
      utils_num.c      \
      utils_not_num.c      \
LIBFT_SRCS = libft/ft_putchar_fd.c	\
	libft/ft_putstr_fd.c	\
	libft/ft_strlen.c	\
	libft/ft_itoa.c	\

OBJS = $(SRCS:.c=.o)
LIBFT_OBJECTS = $(LIBFT_SRCS:.c=.o)

$(NAME) : $(OBJS) $(LIBFT_OBJECTS)
  
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
