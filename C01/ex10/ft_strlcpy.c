unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;
	
	i = 0;
	while (src[i] != '\0')
		count++;
	if (size != 0)
	{
		while(src[i] != '\0' && i < count)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
