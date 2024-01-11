# ifndef STACK_H
	# define STACK_H

	# pragma once

	# include <stdlib.h>
	# include <stdio.h>

	extern size_t mem_allocated;

	typedef struct plate
	{
		int data;
		struct plate *below;
	}	plate;

	typedef struct stack
	{
		plate *top;
	}	stack;

	void	swap(stack *s);
	void 	push(stack *s, int element);
	void 	pop(stack *s);
	void	rotateUp(stack *s);
	void	rotateDown(stack *s);

	void	freeStack(stack *s);
	void	removePlate(plate *plate);
	void 	printStack(stack* s);
	int		isEmpty(stack *s);
	stack	*newStack(void);

	void	checkMem(void *ptr);
	void	*c_malloc(size_t size);
	void	c_free(void *ptr, size_t size);

# endif
