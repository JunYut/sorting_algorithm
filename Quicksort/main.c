#include "quick_sort.h"

#include <stdio.h>

int main(void)
{
	int arr[10] = {3, 2, 0, 1, 4, 8, 7, 6, 9, 5};

	printf("Before: ");
	for (int i = 0; i < 10; ++i)
		printf("%d ", arr[i]);
	printf("\n\n");

	quick_sort(arr, 0, 10);
	
	printf("After: ");
	for (int i = 0; i < 10; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}
