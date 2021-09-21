#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	c;

	while (c != '\0')
	{
		c = *str;
		if (c != '\0')
		{
			ft_putstr(c);
		}
		str++;
	}
}
