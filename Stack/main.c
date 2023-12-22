/*
	What is a stack?
		- A stack is a data structure that stores items in an ordered fashion.
		- It is a LIFO (Last In First Out) structure.
		- The last item to be inserted into a stack is the first item to be removed from the stack.
		- The first item to be inserted into a stack is the last item to be removed from the stack.
		- The insertion and removal operations are called push and pop respectively.
		- The insertion and removal operations are performed on the top of the stack.
		- The top of the stack is the only place where insertion and removal operations can be performed.

	TEST CASES:
		1. Create a stack and see if the order of insertion.
		2. and removal is correct.
*/

# include "stack.h"
# include <stdlib.h>
# include <stdio.h>

int main(void)
{
	stack *s = (stack *)malloc(sizeof(stack));
	s->top = NULL;
	s->volume = 0;

	printf("Stack volume: %zu\n", s->volume);

	return 0;
}