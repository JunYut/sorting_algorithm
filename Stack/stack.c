# include "stack.h"

void push(stack *s, int element)	// bottom plate doko ?
{
	if (isEmpty(s))
	{
		s->top = (plate *)calloc(1, sizeof(plate));	checkMem(s->top);
		s->top->data = element;
		s->bottom = s->top;
		return ;
	}

	plate *newPlate = (plate *)calloc(1, sizeof(plate));
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

void removePlate(plate *plate)
{
	checkMem(plate);
	free(plate);
}

void printStack(stack* s)
{
	if (isEmpty(s))
	{
		printf("printStack: Empty stack\n");
		return ;
	}

	plate *current = s->top;
	while (current->below != NULL)
	{
		printf("element: %d\n", current->data);
		current = current->below;
	}
}

int	isEmpty(stack *s)
{
	if (s->top == NULL && s->bottom == NULL)
		return (1);
	return (0);
}

stack *newStack(void)
{
	stack *newStack = (stack *)calloc(1, sizeof(stack));		checkMem(newStack);

	newStack->top = NULL;
	newStack->bottom = NULL;

	return (newStack);
}
