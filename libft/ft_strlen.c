#include "libft.h"

int	ft_strlen(const char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen])
		strlen++;
	return (strlen);
}
