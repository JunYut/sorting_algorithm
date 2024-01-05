# include "stack.h"

void checkMem(void *ptr)
{
	if (ptr == NULL)
	{
		perror("checkMem: memory not valid\n");
		exit(EXIT_FAILURE);
	}
}
