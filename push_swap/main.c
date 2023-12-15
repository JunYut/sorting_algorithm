//#include "push_swap.h"
#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int length 	= 10;
	int* stack_a = (int*)calloc(length, sizeof(int));
	int* stack_b = (int*)calloc(length, sizeof(int));

	stackGen(stack_a, length, 10);

	printf("Before:\n");
	printStacks(stack_a, stack_b, length);
	printf("\n");

	printf("After:\n");
	//push(stack_a, 69, length);
	printStacks(stack_a, stack_b, length);
	printf("\n");

	free(stack_a);
	free(stack_b);
}
