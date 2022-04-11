NAME = libftprintf.a
RM = rm -f
AR = ar
RCS = rcs
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c      \
      utils_num.c      \
      utils_not_num.c      \
      

OBJS = $(SRCS:.c=.o)
LIBFT_OBJECTS = libft/*.o

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
