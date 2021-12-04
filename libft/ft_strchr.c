#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*destination;
	unsigned char	source;
	int		i;


	destination = (unsigned char *)dest;
	source = (unsigned char)source;
	i = 0;
	while (i++ < n)
		*destination[i] = source;
	return (dest);
}
