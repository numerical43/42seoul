#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_fd(char *str)
{
	char	c;
	int	i;
	
	i = 0;
	while (c)
	{
		c = *str[i];
		ft_putstr_fd(c);
		i++;
	}
}
