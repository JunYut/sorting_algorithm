#include "quick_sort.h"

#include <stdio.h>

int main(void)
{
	int arr[10] = {3, 2, 0, 1, 4, 8, 7, 6, 9, 5};
	int n		= sizeof(arr) / sizeof(arr[0]);		

	printf("Before: ");
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n\n");

	DEBUG("n", n - 1);
	quick_sort(arr, 0, n - 1);
	
	printf("After: ");
	for (int i = 0; i < 10; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}
