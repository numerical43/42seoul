#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	c;
	int	i;
	
	i = 0;
	while (c)
	{ 
		c = *str[i];
		write(fd, *c, 1);
		i++;
	}
}
