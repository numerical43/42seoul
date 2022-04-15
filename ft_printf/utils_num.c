void	ifint(s_list *ap)
{
	char	*result;
	int		num;
	
	num = va_arg(ap->arg, int);
	result = ft_itoa(num);
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
}

void	ifunsignedint(s_list *ap)
{
	char	*result;
	unsigned int	num;
	
	num = va_arg(ap->arg, unsigned int);
	result = ft_unsigned_itoa(num);
	ft_putstr_fd(str, 1);
	ap->count = ap->count + ft_strlen(result);
}

static char	*make_hex(unsigned int num, int strlen)
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
	int		i;
	
	strlen = 1;
	num = va_arg(ap->arg, unsigned int);
	result = make_hex(num, i);
	while (i >= 0)
	{
		if ((num % 16) < 10)
      			result[i] = '0' + (num % 16);
		else if (c == 'x')
			result[i] = 'a' - 10 + (num % 16);
		else if (c == 'X')
			result[i] = 'A' - 10 + (num % 16);
		num = num / 16;
		i--;
	}
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
	free(result);	
}

void	ifpointer(s_list *ap)
{
	int		i;
	char	*result;
	unsigned long num;
	
	i = 1;
	num = va_list(ap->arg, unsigned long);	
	result = make_hex(num, i);
	ft_putstr_fd("0x", 1);
	ap->count = ap->count + 2;
	while (i >= 0)
	{
		if (num % 16 < 10)
			result[i] = '0' + (num % 16);
		else
			result[i] = 'a' + (num % 16) - 10;
		num = num / 16;
		i--;
	}
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
	free(result);
}
