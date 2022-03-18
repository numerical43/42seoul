#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	char *result;

	result = get_next_line(0);
	printf("%s",result);

	result = get_next_line(0);
	printf("%s",result);
	result = get_next_line(0);
	printf("%s",result);
	result = get_next_line(0);
	printf("%s",result);
	result = get_next_line(0);
	printf("%s",result);
}
