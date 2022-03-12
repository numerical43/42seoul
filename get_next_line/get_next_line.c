/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:02:18 by suekang           #+#    #+#             */
/*   Updated: 2022/03/12 18:53:56 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <fcntl.h>

static char *free_mem(char *result, int count)
{
	int	i;

	i = 0;
	while (i <= count)
	{
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free(result);
	return (NULL);
}

char	*get_resultline(char *resultline, char buffer)
{
	size_t	size;

	size = ft_strlen(buffer);
	resultline = ft_strjoin(resultline, buffer);
	resultline = get_newline(resultline);
	buffer = ft_strdup(buffer + size);
	return (resultline);
}

char	*get_newline(char *resultline)
{
	int	i;

	i = 0;
	while (1)
	{
		if (resultline[i] == '\0')
		{
			resultline[i] = '\n';
			resultline[i + 1] = '\0';
			break ;
		}
		i++;
	}
	return (resultline);
}

char	*get_next_line(int fd)
{
	char	*resultline[OPEN_MAX];
	char	buffer[BUFFER_SIZE + 1];
	int		size;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	
	while (1)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (ft_strstr(buffer, '\n'))
		{
			resultline = get_resultline(resultline, buffer);
			break ;
		}
		else
			resultline = ft_strjoin(resultline, buffer);
	}
	free_mem;
	return (resultline);
}

int	main(void)
{
	int		fd;
	char	*result;

	fd = open("test.txt", O_RDONLY);
	result = get_next_line(fd);
	return (0);
}
