#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int main(void)
{
	char c;
	char d;
	char *p;
	p = &c;

	printf("%c %s %x %X %p \n", 'a', "apple", 121212, 121212, p);
	ft_printf("%c %s %x %X %p \n\n\n", 'a', "apple", 121212, 121212, p);

	p = &d;
	printf("%c %s %lx %lX %p \n", '^', "banbaanana", 546513123, 546513123, p);
	ft_printf("%c %s %x %X %p \n", '^', "banbaanana", 546513123, 546513123, p);


	return 0;
}
