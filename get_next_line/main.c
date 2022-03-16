#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char *result;

	fd = open("test.txt", O_RDONLY);
	result = get_next_line(fd);
	printf("01234567890123456789012345678901234567890 : %s\n", result);
	result = get_next_line(fd);
	printf("01234567890123456789012345678901234567890 : %s\n", result);
	close(fd);
	system("leaks a.out");
	return (0);
}
