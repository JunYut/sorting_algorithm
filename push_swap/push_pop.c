#include "utils.h"

void	push(int* stack, int element, int length)
{
	int* buffer = (int*)calloc(length, int);

	for (int i = 0; i < length; ++i)
		buffer[i] = stack[i];
	free(&stack);
	stack = (int*)calloc(length + 1, int);
	stack[0] = element;
	for (int i = 1; i < length + 1; ++i)
		stack[i] = buffer[i - 1];
	free(buffer);
}

void	pop(int* stack, int element, int length)
{
	int* buffer = (int*)calloc(length, int);

	for (int i = 0; i < length; ++i)
		buffer[i] = stack[i];
	free(&stack);
	stack = (int*)calloc(length + 1, int);
	stack[0] = element;
	for (int i = 1; i < length; ++i)
		stack[i] = buffer[i - 1];
	free(buffer);
}

