char	*ft_strcapitalize(char *str)
{
	int	i;
	int j;

	i = 0;
	j = i + 1;
	while(str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'A';
			break;
		}
		else if ((str[j] >= 'a' && str[j] <= 'z') && str[i] == ' ')
		{
			str[j] = str[j] - 'A';
			break;
		}
		else if ((str[i] > 32 && str[i] < 48)
				&& (str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] = str[j] - 'A';
			break;
		}

	}
}
