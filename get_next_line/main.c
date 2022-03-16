#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int   main(void)
{
	int     fd1, fd2, fd3, fd4, fd5;
	char    *result;

	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test1.txt", O_RDONLY);
	fd3 = open("test1.txt", O_RDONLY);
	fd4 = open("test1.txt", O_RDONLY);
	fd5 = open("test1.txt", O_RDONLY);
	result = get_next_line(fd1);
	printf("Hello\nWorld : %s\n", result);
	result = get_next_line(fd2);
	printf("\nWorld : %s\n", result);
	result = get_next_line(fd3);
	printf("empty : %s\n", result);
	result = get_next_line(fd4);
	printf("Hello\nWorld\n : %s\n", result);
	result = get_next_line(fd5);
	printf("\n : %s\n", result);
	return (0);
}
