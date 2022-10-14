#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonal directions
 * in a n*n matrix.
 * @a: pointer to a matrix
 * @size: size of the array (PLEASE MAKE SURE THE SIZE IS CORRECT!!!)
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int index;
	int squared_size;

	int sum = 0;

	squared_size = size * size;
	index = 0;
	/* 
	 * When casting a 2d matrix into an int pointer,
	 * each diagonal in the matrix is size + 1 ahead of the previous one.
	 */
	while (index < squared_size)
	{
		sum += a[index];

		index += size + 1;
	}

	printf("%d, ", sum);
	sum = 0;

	index = 0;
	/*
	 * In the other diagonal direction,
	 * each diagonal is size - 1 away from the previous one,
	 * starting at size - 1.
	 */
	while (index < squared_size - size - 1)
	{
		index += size - 1;

		sum += a[index];
	}

	printf("%d\n", sum);
}

