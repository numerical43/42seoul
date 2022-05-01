#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int main(void)
{
	char c;
	char d;
	char *p;
	p = &c;
	void *str;
	str = NULL;

	printf("<hellohello> %c %s %s %s %x %X <hellohellohello> %% %p %p %p %s %p\n", 'a', "apple", "", str, 121212, 121212, 
			p, (void *)0, (void *)-1, " ", NULL);
	ft_printf("<hellohello> %c %s %s %s %x %X <hellohellohello> %% %p %p %p %s %p\n\n\n", 'a', "apple", "", str, 121212, 121212, 
			p, (void *)0, (void *)-1, " ", NULL);

	p = &d;
	printf("%c %s %x %X %p \n", '^', "banbaanana", 546513123, 546513123, p);
	ft_printf("%c %s %x %X %p \n", '^', "banbaanana", 546513123, 546513123, p);


	p = NULL;
	printf("%p\n", p);
	ft_printf("%p\n", p);

	return 0;
}
