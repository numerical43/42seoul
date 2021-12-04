#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
{
	char	*c;
	size_t	strlen;
	size_t	i;

	i = 0;
	strlen = ft_strlen(s);
	c = (char *)malloc(sizeof(char) * (strlen + 1));
	if(c == NULL)
		return (NULL);
	if (!s || !f)
		return (NULL);
	while (i < strlen)
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';

	return (c);
}
