#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	int	i;

	c = (char *)malloc(sizeof(char) * (len + 1));
	if (c == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	i = 0;
	if((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	i  = 
	
}
