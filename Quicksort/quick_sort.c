#include "quick_sort.h"

/*
	arr[10], start = 0, end = 10

	quick_sort(arr, start, end)

	---------------------------------------------------------------------------
	if (start >= end):
		exit

	last = end - 1
	pivotVal = arr[last]
	pivotPos = start
	i		 = start

	while (i < last):
		if (arr[i] <= pivotVal):
			++pivotPos
			if (arr[pivotPos] > arr[i]):
				swap(arr[pivotPos], arr[i])
		++i
	
	++i
	swap(arr[pivotPos + 1], arr[last])
	quicksort(arr, start, pivotPos - 1)
	quicksort(arr, pivotPos + 1, last)
*/

static void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void quick_sort(int arr[], int start, int end)
{
	if (start >= end)
		return ;

	int first		= start - 1;
	int last 		= end - 1;
	int pivotVal 	= arr[last];
	int pivotPos	= first;

	for (int i = start; i < end; ++i)
	{
		if (arr[i] <= pivotVal)
		{
			++pivotPos;
			swap(&arr[pivotPos], &arr[i]);
		}
	}
	
	swap(&arr[pivotPos + 1], &arr[last]);
	quick_sort(arr, start, pivotPos - 1);
	quick_sort(arr, pivotPos + 1, last);
}
