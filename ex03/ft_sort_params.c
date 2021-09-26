#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}
int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while((a[i] == b[i]) && (a[i] != '\0' && b[i] != '\0'))
		i++;
	return (a[i] - b[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	char *temp;

	i = 1;
	if (argv > 2)
	{
		while (i < argc - 1)
		{				
			if (argv[i] > argv[i + 1])
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
	return (0);

}
