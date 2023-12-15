#ifndef UTILS_H
	#define UTILS_H

	#pragma once

	#include <stdlib.h>
	#include <time.h>
	#include <stdio.h>

	int 	isEmpty(int arr[], int length);
	void 	stackGen(int arr[], int length, int range);
	void 	printArr(int arr[], int length);
	void 	printStacks(int stack_a[], int stack_b[], int length);
	void 	swap(int* a, int* b);

#endif
