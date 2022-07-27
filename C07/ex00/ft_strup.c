#include <stdlib.h>
#include <ft_stock_str.h>

char	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src, int size)
{
	int		i;
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
