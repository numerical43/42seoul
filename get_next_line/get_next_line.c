/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:02:18 by suekang           #+#    #+#             */
/*   Updated: 2022/03/17 21:29:52 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*clean_line(char *line)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\n')
		i++;
	if (ft_strlen(line) - i == 0)
	{
		free(line);
		return (NULL);
	}
	temp = (char *)malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	if (!temp)
		return (NULL);
	while (line[i + (++j)])
		temp[j] = line[i + j];
	temp[j] = '\0';
	free(line);
	return (temp);
}

char	*get_line(char *line, int fd)
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
			break ;
		buffer[size] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buffer);
	if (size == -1)
		return (NULL);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*result;
	static char	*line = NULL;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	line = get_line(line, fd);
	if (!line)
		return (NULL);
	result = ft_strdup(line);
	if (!result)
	{
		free(line);
		return (NULL);
	}
	line = clean_line(line);
	return (result);
}
