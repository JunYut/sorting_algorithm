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

# define LOG_MEM printf("memory allocated: %zu\n", mem_allocated)
# define DIVIDER printf("------------------------------------------------------------\n")

void TEST_SWAP(void);
void TEST_INSERTION(void);
void TEST_REMOVAL(void);
void TEST_ROTATEUP(void);
void TEST_ROTATEDOWN(void);
void TEST_LEAKS(void);

int main(void)
{
	// TEST_SWAP();			// This test will have memory leaks
	// TEST_INSERTION();	// This test will have memory leaks
	// TEST_REMOVAL();
	// TEST_LEAKS();
	TEST_ROTATEUP();
	TEST_ROTATEDOWN();
}


void TEST_SWAP(void)
{
	printf("TEST_SWAP:\n");
	DIVIDER;

	stack *s = newStack();

	printf("Before:\n");
	printStack(s);
	push(s, 69);
	push(s, 420);
	printStack(s);

	printf("\nAfter:\n");
	swap(s);	printStack(s);

	freeStack(s);

	printf("TEST FINISHED\n");
	DIVIDER;
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

	freeStack(s);

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

	freeStack(s);

	printf("TEST FINISHED\n");
	DIVIDER;
}

void TEST_LEAKS(void)
{
	printf("TEST_LEAKS:\n");
	DIVIDER;

	stack *s = newStack();	LOG_MEM;
	push(s, 1);				LOG_MEM;
	push(s, 2);				LOG_MEM;
	swap(s);				LOG_MEM;
	pop(s);					LOG_MEM;
	pop(s);					LOG_MEM;
	freeStack(s);			LOG_MEM;

	printf("\nTEST FINISHED\n");
	DIVIDER;
}

void TEST_ROTATEUP(void)
{
	printf("TEST ROTATEUP:\n");
	DIVIDER;

	stack *s = newStack();		LOG_MEM;

	for (int i = 0; i < 5; ++i) push(s, i * 10);	LOG_MEM;

	printf("Before:\n");
	printf("Top plate: %d\n", s->top->data);
	printStack(s);

	printf("\nAfter:\n");
	rotateUp(s);	LOG_MEM;
	printf("Top plate: %d\n", s->top->data);
	printStack(s);

	freeStack(s);	LOG_MEM;

	printf("TEST FINISHED\n");
	DIVIDER;
}

void TEST_ROTATEDOWN(void)
{
	printf("TEST ROTATEDOWN:\n");
	DIVIDER;

	stack *s = newStack();		LOG_MEM;

	for (int i = 0; i < 5; ++i) push(s, i * 10);	LOG_MEM;

	printf("Before:\n");
	printf("Top plate: %d\n", s->top->data);
	printStack(s);

	printf("\nAfter:\n");
	rotateDown(s);	LOG_MEM;
	printf("Top plate: %d\n", s->top->data);
	printStack(s);

	freeStack(s);	LOG_MEM;

	printf("TEST FINISHED\n");
	DIVIDER;
}
