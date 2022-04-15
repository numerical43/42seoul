static int	count_index(unsigned int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char			*c;
	int				i;

	i = count_index(n);
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	c[i--] = '\0';
	if (nb == 0)
		c[0] = '0';
	while (nb)
	{
		c[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (c);
}
