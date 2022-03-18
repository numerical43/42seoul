#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int	fd1, fd2, fd3, fd4;
	char *result;

	fd1 = open("test1.txt", O_RDONLY);
	while (1)
	{
		result = get_next_line(fd1);
		printf("fd1\n01234567890123456789012345678901234567890 : %s\n", result);
		if (!result)
		{
			free(result);
			break;
		}
		free(result);
	}
	close(fd1);
	while (1)
	{
		result = get_next_line(fd1);
		printf("fd1\n01234567890123456789012345678901234567890 : %s\n", result);
		if (!result)
		{
			free(result);
			break;
		}
		free(result);
	}
	close(fd1);


	fd2 = open("test2.txt", O_RDONLY);
	while (1)
	{
		result = get_next_line(fd2);
		printf("fd2\nNULL : %s\n", result);
		if (!result)
		{
			free(result);
			break;
		}
		free(result);
	}
	close(fd2);

	fd3 = open("test3.txt", O_RDONLY);
	while (1)
	{
		result = get_next_line(fd3);
		printf("fd3\nHello(newline)World : %s\n", result);
		if (!result)
		{
			free(result);
			break;
		}
		free(result);
	}

	fd4 = open("test4.txt", O_RDONLY);
	while (1)
	{
		result = get_next_line(fd4);
		printf("fd4\n(newline)(newline)Hello(newline)(newline) : %s\n", result);
		if (!result)
		{
			free(result);
			break;
		}
		free(result);
	}
	close(fd4);

	system("leaks a.out");
	return (0);
}
