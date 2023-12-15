#include "push_swap.h"
#include "utils.h"

void sa(int stack_a[], int length)
{
	if (length <= 1)
		return ;
	
	swap(&stack_a[0], &stack_a[1]);
}

void sb(int stack_b[], int length)
{
	if (length <= 1)
		return ;
	
	swap(&stack_b[0], &stack_b[1]);
}

void ss(int stack_a[], int stack_b[], int length)
{
	sa(stack_a, length);
	sb(stack_b, length);
}

// void pa(int stack_a[], int stack_b[], int length)
// {
// 	if (isEmpty(stack_b, length) == 1)
// 		return ;

// 	// shift(stack_a, down, 1)
// 	// stack_a[0] = stack_b[0]
// 	// pop(stack_b)
// }

// void pb(int stack_b[], int stack_a[], int length)
// {
// 	if (isEmpty(stack_a, length) == 1)
// 		return ;

// 	// shift(stack_b, down, 1)
// 	// stack_b[0] = stack_a[0]
// 	// pop(stack_a)
// }
