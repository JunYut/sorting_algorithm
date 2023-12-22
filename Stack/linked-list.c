# include "stack.h"

void traverse(Stack* stack)
{
	Stack* current = stack->top;
	
	while (current != NULL)
	{
		// Process current node
		// ...
		
		current = current->next;
	}
}

void insert(Stack* stack)
{

}
