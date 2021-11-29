#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i++ < n)
		(unsigned char *)s = (unsigned char)c;
	return (s);
}
