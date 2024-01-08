# include "stack.h"

size_t mem_allocated = 0;

void checkMem(void *ptr)
{
	if (ptr == NULL)
	{
		perror("checkMem: memory not valid\n");
		exit(EXIT_FAILURE);
	}
}

void	*c_malloc(size_t size)
{
	void *memBlock = malloc(size);	checkMem(memBlock);
	mem_allocated += size;

	return (memBlock);
}

void	c_free(void *ptr, size_t size)
{
	free(ptr);
	mem_allocated -= size;
}
