#include "ft_printf.h"

void	if_char(my_list *ap)
{
	char result;
	
	result = va_arg(ap->args, int);
	ft_putchar_fd(result, 1);
	ap->count++;	
}

void	if_str(my_list *ap)
{
	char	*result;
		
	result = va_arg(ap->args, char *);
	if (!result)
	{
		ft_putstr_fd("(null)", 1);
		ap->count = ap->count + 6;
	}
	else
	{
		ft_putstr_fd(result, 1);
		ap->count = ap->count + ft_strlen(result);
	}
}

void	if_elsechar(my_list *ap, const char format)
{
	ft_putchar_fd(format, 1);
	ap->count++;
}

void	if_percent(my_list *ap)
{
	ft_putchar_fd('%', 1);
	ap->count++;
}
