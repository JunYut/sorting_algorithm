# include "mysort.h"

int *mysort(int arr[], int size)
{
	arr[1] += 0; //delete this
	size += 0; //delete this
	// char** numStrs = intArr_to_strArr(arr, size);

	return (NULL);
}

void	digitSort(char* numStrs[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (countDigits(numStrs[j]) > countDigits(numStrs[i]))
				swap(&numStrs[j], &numStrs[i]);
		}
	}

}

int* digitsList(char* numStrs[], int size)
{
	int* list = (int*)malloc(11 * sizeof(int));

	for (int i = 0; i < 11; ++i)
		list[i] = 0;

	for (int i = 0; i < size; i++)
		list[countDigits(numStrs[i])] += 1;

	printStrs(numStrs, size);	// debug
	printInts(list, 11);		// debug

	return(list);
}

void swap(char** num1, char** num2)
{
	char* temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int countDigits(char* numStr)
{
	int count = -1;

	while (numStr[++count] != 0);
	if (numStr[0] == '-')
		--count;

	return (count);
}

char**	intArr_to_strArr(int arr[], int size)
{
	char** strArr = (char**)malloc(sizeof(char*));

	for (int i = 0; i < size; i++)
	{
		strArr[i] = (char*)malloc(12 * sizeof(char*));
		sprintf(strArr[i], "%d", arr[i]);
	}

	return (strArr);
}
