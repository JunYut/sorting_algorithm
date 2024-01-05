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
		1. Create a stack and see if the order of insertion is correct.
		2. Create a stack and see if the order of removal is correct.
*/

# include "stack.h"
# include <stdlib.h>
# include <stdio.h>

# define LOG(x, i) printf("element[%d]: %s\n", i, x)
# define DIVIDER printf("------------------------------------------------------------\n")

void TEST_INSERTION(void);
void TEST_REMOVAL(void);

int main(void)
{
	TEST_INSERTION();
	TEST_REMOVAL();
}

void TEST_INSERTION(void)
{
	printf("TEST_INSERTION:\n");
	DIVIDER;

	stack *s = newStack();

	printStack(s);
	push(s, 404);
	printStack(s);
	for (int i = 0; i < 10; ++i)
	{
		push(s, i);
		printStack(s);	printf("\n");
	}

	printf("TEST FINISHED\n");
	DIVIDER;
}

void TEST_REMOVAL(void)
{
	printf("TEST_REMOVAL:\n");
	DIVIDER;

	stack *s = newStack();

	printStack(s);
	for (int i = 0; i < 10; ++i)
		push(s, i);
	printStack(s);	printf("\n");
	for (size_t i = 0; i < 10; i++)
	{
		pop(s);
		printStack(s);	printf("\n");
	}

	printf("TEST FINISHED");
	DIVIDER;
}
