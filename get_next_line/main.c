#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char *result;

	fd = open("test.txt", O_RDONLY);
	result = get_next_line(fd);
	printf("0134567890 : %s\n", result);

	return (0);
}
