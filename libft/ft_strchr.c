#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	find;

	i = 0;
	find = (unsigned char)c;	
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)s[i]);
		i++;
	}
	return (NULL);
}
