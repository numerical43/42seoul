/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:14:35 by suekang           #+#    #+#             */
/*   Updated: 2022/01/02 20:58:26 by hdoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	find;
	int		i;

	i = (int)(ft_strlen(s)) - 1;
	find = (char)c;
	if (s)
	{
		while (i >= 0)
		{
			if (s[i] == find)
				return ((char *)&(s[i]));
			i--;
		}
	}
	return (0);
}

int main(void)
{
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	char *result;

	result = ft_strrchr(s2, 'l');
	result = ft_strrchr(s, 'z');
	result = ft_strrchr(s, 't' + 256);
	result = ft_strrchr(s, 0);

	return (0);
}
