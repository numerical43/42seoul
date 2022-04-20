#include "ft_printf.h"

int	count_index(unsigned int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char			*c;
	int				i;

	i = count_index(n);
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	c[i--] = '\0';
	if (n == 0)
		c[0] = '0';
	while (n)
	{
		c[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (c);
}
