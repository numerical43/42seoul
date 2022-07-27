#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;
		 
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
 
char	*ft_create_str(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*join;

	i = 0;	
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		len = 1;

	join = (char *)malloc(sizeof(char) * len);
	if (join == NULL)
		return (NULL);
	return (join);
}
 
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		index;
	char	*join;

	join = ft_create_str(size, strs, sep);
	i = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			join[index] = strs[i][j];
			j++;
			index++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			join[index] = sep[j];
			j++;
			index++;
		}
		i++;
	}
	join[index] = '\0';
	return (join);
}
