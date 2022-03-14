/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:02:18 by suekang           #+#    #+#             */
/*   Updated: 2022/03/14 17:12:55 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <fcntl.h>

char	*get_line(char *line, char *result)
{
	int		i;

	i = ft_strlen(line);
	result = ft_strdup(line);
	line = ft_strdup(line + i);
	while (!result[i])
		result[i] = '\0';
	return (result);
}

char	*get_buffer(char *line, int fd)
{
	int		size;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(line, '\n'))
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size <= 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[size] = '\0';
		line = ft_strjoin(line, size);
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
	line = get_buffer(line, fd);
	result = get_line(line, result);
	return (result);
}

int	main(void)
{
	int		fd;
	char	*result;

	fd = open("test.txt", O_RDONLY);
	result = get_next_line(fd);
	return (0);
}
