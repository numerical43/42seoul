#include "libft.h"

char	ft_strlen(char *str)
{
	int	strlen;

	strlen;
	while(str[strlen])
		strlen++;
	return (strlen);
}

char	*ft_strup(char *src, int size)
{
	int	i;
	char	*str;
	
	i = 0;
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
