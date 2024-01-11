# include "stack.h"

void swap(stack *s)
{
	if (isEmpty(s))
	{
		printf("swap: Empty stack\n");
		return ;
	}

	plate *prevTop = s->top;
	s->top = s->top->below;			// plate #2 becomes 'top plate'
	prevTop->below = s->top->below;	// below plate #1 is plate #3
	s->top->below = prevTop;		// below of plate #2 is plate #1
}

void push(stack *s, int element)
{
	if (isEmpty(s))
	{
		// printf("push: First plate !\n");
		s->top = (plate *)c_malloc(sizeof(plate));	checkMem(s->top);
		s->top->data = element;
		s->top->below = NULL;
		return ;
	}

	plate *newPlate = (plate *)c_malloc(sizeof(plate));
	newPlate->data = element;
	newPlate->below = s->top;	// newPlate is on top of the stack
	s->top = newPlate;			// now newPlate is the 'top plate' of the stack
}

void pop(stack *s)
{
	if (isEmpty(s))
	{
		printf("pop: Empty stack\n");
		return ;
	}

	plate *temp = s->top;
	s->top = s->top->below;		// move 'top' pointer to the second plate
	removePlate(temp);		// free memory of the 'top plate'
}

/*
	@brief 	This functions rotates the stack upwards by 1 plate, essentially making
			plate #2 the 'top plate' and plate #1 the 'bottom plate'
*/
void rotateUp(stack *s)
{
	if (isEmpty(s))
	{
		printf("rotateUp: Empty stack\n");
		return ;
	}
	if (s->top->below == NULL)
	{
		printf("rotateDown: Single element\n");
		return ;
	}

	plate *bottom = s->top;

	while (bottom->below != NULL)
		bottom = bottom->below;

	bottom->below = s->top;			// plate #1 becomes 'bottom plate'
	s->top = s->top->below;			// plate #2 becomes 'top plate'
	bottom->below->below = NULL;	// there is no plate below plate #1
}

/*
	@brief 	This functions rotates the stack downwards by 1 plate, essentially making
			plate #LAST the 'top plate' and plate #1 the 'second plate'
*/
void rotateDown(stack *s)
{
	if (isEmpty(s))
	{
		printf("rotateDown: Empty stack\n");
		return ;
	}
	if (s->top->below == NULL)
	{
		printf("rotateDown: Single element\n");
		return ;
	}

	plate *capBottom = s->top;

	while (capBottom->below->below != NULL)		// loop until second last plate
		capBottom = capBottom->below;

	plate *temp = s->top;
	s->top = capBottom->below;	// plate #LAST becomes 'top plate'
	capBottom->below = NULL;	// there is no plate below plate #LAST
	s->top->below = temp;		// plate #1 becomes 'second plate'
}

void freeStack(stack *s)
{
	if (s == NULL)
	{
		printf("freeStack: stack does not exist");
		return ;
	}
	if (isEmpty(s))
	{
		printf("freeStack: empty stack freed\n");
		c_free(s, sizeof(stack));
		return ;
	}

	plate *current = s->top;
	plate *temp;

	while (current->below != NULL)
	{
		temp = current->below;
		removePlate(current);
		current = temp;
	}

	removePlate(current);
	c_free(s, sizeof(stack));
}

void removePlate(plate *plate)
{
	checkMem(plate);
	c_free(plate, sizeof(*plate));
}

void printStack(stack* s)
{
	if (isEmpty(s))
	{
		printf("printStack: Empty stack\n");
		return ;
	}

	plate *current = s->top;
	while (current != NULL)
	{
		printf("element: %d\n", current->data);
		current = current->below;
	}
}

int	isEmpty(stack *s)
{
	if (s->top == NULL)
		return (1);
	return (0);
}

stack *newStack(void)
{
	stack *newStack = (stack *)c_malloc(sizeof(stack));		checkMem(newStack);

	newStack->top = NULL;

	return (newStack);
}
