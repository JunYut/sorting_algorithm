# include "mysort.h"
# include <stdio.h>

int main(void)
{
	char* nums[] = {"-123", "-9", "98776", "9876454321",
					"-12345", "1", "-2147483648", "420"};
	int size = sizeof(nums) / sizeof(char*);

	printStrs(nums, size);	printf("\n");
	digitSort(nums, size);	printStrs(nums, size);
}
