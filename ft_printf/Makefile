NAME = libftprintf.a
RM = rm -f
AR = ar
RCS = rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ./libft

SRCS =  ft_printf.c	\
      utils_num.c	\
      utils_not_num.c	\
      ft_unsigned_int.c	\

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS) 
  	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a $@
	$(AR) $(RCS) $@ $^

%.o : %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
