#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (0);
}
