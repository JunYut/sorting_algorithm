# ifndef STACK_H
	# define STACK_H

	# pragma once

	# include <stddef.h>

	typedef struct Stack
	{
		int element;
		struct Stack* top;
		struct Stack* previous;
		struct Stack* next;
	} Stack;

	void traverse(Stack* stack);
	void insert(Stack* stack);

# endif