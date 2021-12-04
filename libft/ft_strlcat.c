#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	result;

	i = 0;
	dest_len = ft_strlen(dest);
	while (i < size - 1)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	result = ft_strlen(dest);

	return (result);
}
