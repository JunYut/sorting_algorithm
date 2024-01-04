# ifndef STACK_H
	# define STACK_H

	# pragma once

	# include "linked-list.h"

	typedef struct stack
	{
		node *top;
		size_t volume;
	}	stack;

# endif