#include "quick_sort.h"

/*
	arr[10], start = 0, end = arr.length - 1

	quick_sort(arr, start, end)

	---------------------------------------------------------------------------
	if (start >= end):
		exit

	pivotVal = arr[end]
	pivotPos = start
	i		 = start

	while (i < end):
		if (arr[i] <= pivotVal):
			++pivotPos
			if (arr[pivotPos] > arr[i]):
				swap(arr[pivotPos], arr[i])
		++i
	
	++pivotPos
	swap(arr[pivotPos], arr[end])
	quicksort(arr, start, pivotPos - 1)
	quicksort(arr, pivotPos + 1, end)
*/

static void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	// printf("swap: %d, %d\n", *num1, *num2);	//debug
}

void quick_sort(int arr[], int start, int end)
{
	if (start >= end)
		return ;

	// printf("______________\narr: ");	//debug
	// for (int i = start; i <= end; ++i)	//debug
		// printf("%d ", arr[i]);	//debug
	// printf("\n");	//debug

	int pivotVal 	= arr[end];
	int pivotPos	= start - 1;

	for (int i = start; i < end; ++i)
	{
		if (arr[i] <= pivotVal)
		{
			// printf("%d <= %d\n", arr[i], pivotVal);	//debug
			++pivotPos;
			if (arr[pivotPos] > arr[i])
			{
				// printf("%d > %d\n", arr[pivotPos], arr[i]);	//debug
				swap(&arr[pivotPos], &arr[i]);
			}
		}
	}
	
	++pivotPos;
	swap(&arr[pivotPos], &arr[end]);
	// printf("Partitioning...\n");	//debug
	quick_sort(arr, start, pivotPos - 1);
	quick_sort(arr, pivotPos + 1, end);
}
