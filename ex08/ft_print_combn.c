#include <unistd.h>

void	set_comb(int n, char* comb)
{
	int	i;

	i = 0;
	while (i <= n - 1)
	{
		comb[i] = comb[i - 1] + '1';
		i++;
	}
}

int	comb_max(int n, char* comb)
{
	if(comb[0] != (9 - n))
		return (1);
	else
		return (0);
}

void	ft_print_combn(int n)
{
	char	comb[n];
	int		index;

	index = 0;
	comb[0] = '0';
	while(comb_max(n, comb))
	{
		set_comb(n, comb);
		while (comb[n - 1] <= '9')
		{
			while(index <= n - 1)
			{
				write(1, comb[index], 1);
				index++;
			}
			write(1, ", ", 2);
			comb[n - 1]++;
			index = 0;
		}
		comb[0]++;
	}
}

int	main(void)
{
	ft_print_combn(4);
	return (0);
}
