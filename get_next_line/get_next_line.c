/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:02:18 by suekang           #+#    #+#             */
/*   Updated: 2022/03/15 17:11:44 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_result(char *result)
{
	int	i;

	i = 0;
	while (result[i] != '\n' || result[i])
		i++;
	while (!result[++i])
		result[i] = '\0';
	return (result);
}

char	*clean_line(char *line)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (!line[i] && line[i] != '\n')
		i++;
	temp = (char *)malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	if (!temp)
		return (NULL);
	i++;
	while (!line[i + j])
	{
		temp[j] = line[i + j];
		j++;
	}
	temp[j] = '\0';
	free(line);
	return (temp);
}

char	*get_line(char *line, int fd)
{
	int		size;
	char	*buffer;

	size = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(line, '\n') && size > 0)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[size] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*result;
	static char	*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	line = get_line(line, fd);
	if (!line)
		return (NULL);
	result = ft_strdup(line);
	if (!result)
		return (NULL);
	result = get_result(result);
	line = clean_line(line);
	return (result);
}

//int	main(void)
//{
//	int		fd;
//	char	*result;
//
//	fd = open("test.txt", O_RDONLY);
//	result = get_next_line(fd);
//	return (0);
//}
