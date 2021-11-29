#include "libft.h"

int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int	ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
