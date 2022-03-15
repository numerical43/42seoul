#include "get_next_line.h"
#include <fcntl.h>

int   main(void)
{
	int     fd;
	char    *result;

	fd = open("test.txt", O_RDONLY);
	result = get_next_line(fd);
	return (0);
}
