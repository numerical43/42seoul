#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return (big);
	while (i < len && big[i])
	{
		j = 0;
		if ((big[i] == little[j]) && (i + j < len))
		{
			if (!little)
				return ((char *)big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
