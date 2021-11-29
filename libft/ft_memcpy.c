#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		if ((dest + i) == src || dest == (src - i))
		{
			ft_memmove(dest, src, n);
			return (dest);
		}
		*(unsigned char *)dest[i] = *(unsigned char *)src[i];
		i++;
	}
	return (dest); 
}
