#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char 	*source;
	int		i;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;

	while (i <= n)
	{
		*destination[i] = *source[i];
		i++;
	}

}
