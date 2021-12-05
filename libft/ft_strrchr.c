#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	find;
	size_t	i;

	i = ft_strlen(s) - 1;
	find = (size_t)c;
	while (i >= 0)
	{
		if (s[i] == find)
		       return ((char *)s[i]);
		i--;
	}
	return (NULL);
}
