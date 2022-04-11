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
