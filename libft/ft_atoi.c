#include "libft.h"

int	atoi(const char *nptr)
{
	long	num;
	long	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] !- '\0') && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ' || str[i] == '\r'))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		num *= 10;
		num += nptr[i] - '0';
		i++;
	}
	if (num > 2147483647 && sign == 1)
		return (-1);
	if (num < 2147483648 && sign == -1)
		return (0);
	num *= sign;
	return (num);
}
