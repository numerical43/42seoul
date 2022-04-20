#include "ft_printf.h"

void	if_int(my_list *ap)
{
	char	*result;
	int		num;
	
	num = va_arg(ap->args, int);
	result = ft_itoa(num);
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
}

void	if_unsigned_int(my_list *ap)
{
	char	*result;
	unsigned int	num;
	
	num = va_arg(ap->args, unsigned int);
	result = ft_unsigned_itoa(num);
	ft_putstr_fd(result, 1);
	ap->count = ap->count + ft_strlen(result);
}

char	*make_hex(unsigned long num, int strlen)
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
	return (hex);
}

void	if_hex(my_list *ap, char c)
{
	unsigned long	num;
	char *result;
	int		i;
	
	i = 1;
	num = va_arg(ap->args, unsigned int);
	result = make_hex(num, i);
	i = ft_strlen(result) - 1;
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

void	if_pointer(my_list *ap)
{
	int		i;
	char	*result;
	unsigned long num;
	
	i = 1;
	num = va_arg(ap->args, unsigned long);
	if (!num)
	{
		ft_putstr_fd("(nil)", 1);
		ap->count = ap->count + 5;
		return ;
	}
	result = make_hex(num, i);
	i = ft_strlen(result) - 1;
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
