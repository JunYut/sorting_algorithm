#include "quick_sort.h"

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void printArr(int arr[], int length);

int main(void)
{
	int length = 20;
	int arr[length];

	srand(time(NULL));
	for (int i = 0; i < length; ++i)
		arr[i] = rand() % 100;	// generating random numbers between 0 & 99

	printf("Before: ");
	printArr(arr, length);

	quick_sort(arr, 0, length - 1);
	
	printf("After: ");
	printArr(arr, length);
}

void printArr(int arr[], int length)
{
	for (int i = 0; i < length; ++i)
		printf("%d ", arr[i]);
	printf("\n\n");
}
