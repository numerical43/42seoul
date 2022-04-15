void	ifint(s_list *ap)
{
	char	*result;
	int		num;
	
	num = va_arg(ap->arg, int);
	result = ft_itoa(num);
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
}


char	*ft_unsigned_itoa(unsigned int n)
{
	char			*c;
	int				i;

	i = nbindex(n);
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	c[i--] = '\0';
	if (nb == 0)
		c[0] = '0';
	if (n < 0)
	{
		c[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		c[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (c);
}

void	ifunsignedint(s_list *ap)
{
	char	*result;
	unsigned int	num;
	
	num = va_arg(ap->arg, unsigned int);
	result = ft_itoa(num);
	ft_putstr_fd(str, 1);
	ap->count = ap->count + ft_strlen(result);
}

static void	make_hex(unsigned int num, int strlen)
{
	char	*hex;
	
	while (num >= 16)
	{
		num = num / 16;
		strlen++;
	}
	hex = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!hex)
		return (NULL);
	hex[strlen] = '\0';
	strlen--;
	return (hex);
}

void	ifhex(s_list *ap, char c)
{
	unsigned int	num;
	char *result;
	int		strlen;
	
	strlen = 1;
	num = va_arg(ap->arg, unsigned int);
	result = make_hex(num, strlen);
	while (strlen >= 0)
	{
		if ((num % 16) < 10)
      			result[strlen] = '0' + (num % 16);
		else if (c == 'x')
			result[strlen] = 'a' - 10 + (num % 16);
		else if (c == 'X')
			result[strlen] = 'A' - 10 + (num % 16);
		num = num / 16;
		strlen--;
	}
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
	free(result);	
}
