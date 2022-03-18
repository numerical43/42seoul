#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	char *result;
	
	result = get_next_line(1);
	printf("%s",result);
}
