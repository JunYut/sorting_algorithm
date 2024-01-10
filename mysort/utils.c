# include "mysort.h"

void printStrs(char* numStrs[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("numStrs[%d]: %s\n", i, numStrs[i]);
}

void printInts(int nums[], int size)
{
	for (int i = 0; i < size; ++i)
		if (nums[i] != 0)
			printf("nums[%d]: %d\n", i, nums[i]);
}

void temp(int arr[], int size)
{
	int max = arr[0];
	int temp;

	for (int i = 0; i < size; ++i)
		if (arr[i] > max)
			max = arr[i];

	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 1; j < size - i - 1; ++j)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
