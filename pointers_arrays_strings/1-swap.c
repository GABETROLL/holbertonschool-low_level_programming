#include "main.h"

/**
 * swap_int - Swaps values of two ints
 * @a: int pointer
 * @b: int pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

