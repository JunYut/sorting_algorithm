# ifndef STACK_H
	# define STACK_H

	# pragma once

	# include <stdlib.h>
	# include <stdio.h>

	typedef struct plate
	{
		int data;
		struct plate *below;
	}	plate;

	typedef struct stack
	{
		plate *top;
		plate *bottom;
	}	stack;

	void 	push(stack *s, int element);
	void 	pop(stack *s);
	void	removePlate(plate *plate);
	void 	printStack(stack* s);
	int		isEmpty(stack *s);
	stack	*newStack(void);

	void	checkMem(void *ptr);

# endif
