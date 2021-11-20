#include "libft.h"

int	atoi(const char *str)
{
	long	num;
	long	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while ((str[i] != '\0') && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ' || str[i] == '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	if (num > 2147483647 && sign == 1)
		return (-1);
	if (num < 2147483648 && sign == -1)
		return (0);
	num *= sign;
	return (num);
}
