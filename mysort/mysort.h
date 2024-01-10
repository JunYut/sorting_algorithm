# ifndef MYSORT_H
	# define MYSORT_H

	# pragma once

	# include <stdlib.h>
	# include <stdio.h>
	# include <stddef.h>

	int*	mysort(int arr[], int size);
	void	digitSort(char* numStrs[], int size);
	int*	digitsList(char* numstrs[], int size);
	void	swap(char** num1, char** num2);
	int		countDigits(char* numStr);
	char**	intArr_to_strArr(int arr[], int size);

	void	printStrs(char* numStrs[], int size);
	void	printInts(int nums[], int size);

# endif
