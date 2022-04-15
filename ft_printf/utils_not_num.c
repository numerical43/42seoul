void	ifchar(s_list *ap)
{
	char result;
	
	result = va_arg(ap->arg, int);
	ft_putchar_fd(result, 1);
	ap->count++;	
}

void	ifstr(s_list *ap)
{
	char	*result;
	
	result = va_arg(ap->arg, char *);
	if (!result)
	{
		ft_putstr_fd("(null)", 1);
		ap->count++;
	}
	else
	{
		strlen = ft_strlen(result);
		ap->count = ap->count + ft_strlen(result);;
	}
}

void	ifpointer(s_list *ap)
{
	int		len;
	char	*result;
	unsigned long num;
	
	len = 1;
	num = va_list(ap->arg, unsigned long);	
	
	len = 1;
	result = numberlength(num, &len);
	ft_putstr_fd("0x", 1);
	ap->count = ap->count + 2;
	len--;
	while (length >= 0)
	{
		if (num % 16 < 10)
			result[len] = '0' + (num % 16);
		else
			result[len] = 'a' + (num % 16) - 10;
		num = num / 16;
		len--;
		ap->count++;
	}
	ft_putstr_fd(result, 1);
	free(result);
}

void ifelsechar(s_list *ap, const char format)
{
	ft_putchar_fd(format, 1);
	ap->count++;
}

void ifpercent(s_list *ap);
{
	ft_putchar_fd('%', 1);
	ap->count++;
}
