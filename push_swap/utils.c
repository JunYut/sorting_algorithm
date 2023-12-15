#include "utils.h"

int isEmpty(int arr[], int length)
{
	for(int i = 0; i < length; ++i)
		if (arr[i] != 0)
			return (0);
	return (1);
}

void stackGen(int arr[], int length, int range)
{
	srand(time(NULL));
	for (int i = 0; i < length; ++i)
		arr[i] = rand() % range;
}

void printArr(int arr[], int length)
{
	for (int i = 0; i < length; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

void printStacks(int stack_a[], int stack_b[], int length)
{
	printf("Stack A: ");
	printArr(stack_a, length);
	
	printf("\n");

	printf("Stack B: ");
	printArr(stack_b, length);
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

