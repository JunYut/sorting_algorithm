#include "quick_sort.h"

/*
	pivotVal = arr[end]
	i = start - 1
	pivotPos = i

	if (end <= start):
		pass

	while (++i <= end):
		if (arr[i] <= pivotVal):
			++pivotPos
			if (arr[i] > arr[pivotPos]):
				swap(arr[i], arr[pivotPos])
	++pivotPos
	swap(arr[pivotPos], arr[end])
	
	quick_sort(arr, start, pivotPos - 1)
	quick_sort(arr, pivotPos + 1, end)
*/
static void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void quick_sort(int arr[], int start, int end)
{
	int pivotVal = arr[end - 1];	DEBUG("pivotVal", pivotVal);
	int i = start - 1;
	int pivotPos = i;

	if (end <= start)
		return ;

	while (++i < end)
	{
		if (arr[i] <= pivotVal)
		{
			++pivotPos;
			if (arr[i] > arr[pivotPos])
				swap(arr + i, arr + pivotPos);
		}
		DEBUG("pivotPos", pivotPos);
	}
	++pivotPos; 	DEBUG("pivotPos", pivotPos);
	swap(arr + pivotPos, arr + end - 1);
	for (int j = 0; j < end; ++j) printf("arr[%d]: %d\n", j, arr[j]);
	quick_sort(arr, start, pivotPos - 1);
	quick_sort(arr, pivotPos + 1, end);
}
