/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:07:08 by suekang           #+#    #+#             */
/*   Updated: 2021/09/23 19:07:14 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		j = i - 1;
		if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
		{
			str[i] = str[i] - 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[j] < '0') || (str[j] > '9' && str[j] < 'A')
				|| (str[j] > 'Z' && str[j] < 'a') || (str[j] > 'z'))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
