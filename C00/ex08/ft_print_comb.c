#include <unistd.h>

void	set_comb(int i, int index, char *comb);

void	ft_print_comb(char *comb, int index)
{
	int	i;

	i = 0;
	while (i <= index)
	{
		write(1, &comb[i], 1);
		i++;
	}
	if (comb[0] != ('9' - index) || comb[index] != '9')
	{
		write(1, ", ", 2);
	}
}
void	ft_comb(int i, int index, char *comb)
{
	if(comb[i] == '9')
	{
		ft_comb(i - 1, index, comb);
	}
	comb[i] += 1;
	set_comb(i + 1, index, comb);
}

void	set_comb(int i, int index, char *comb)
{
	if (i <= index)
	{
		comb[i] = comb[i - 1] + 1;
		set_comb(i + 1, index, comb);
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];
	int		index;
	int		i;

	i = 0;
	index = n - 1;
	comb[0] = '0';
	set_comb(i + 1, index, comb);
	while (comb[0] <= ('9' - index))
	{
		while (comb[index] <= '9')
		{
			ft_print_comb(comb, index);
			comb[index]++ ;
		}
		ft_comb(index, index, comb);;
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
