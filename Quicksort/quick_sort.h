#ifndef QUICK_SORT_H
	#define QUICK_SORT_H
	
	#pragma once

	#include <stdio.h>

	#define DEBUG(s, v) printf("%s: %d\n", s, v)

	void quick_sort(int arr[], int start, int end);

#endif