#include "libgt.h"

void	ft_putchar_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, '-', 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
	else
		write(fd, n, 1);
}
