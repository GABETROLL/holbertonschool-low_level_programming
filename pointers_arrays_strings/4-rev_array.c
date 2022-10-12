#include "main.h"

/**
 * reverse_array - Reverses array.
 * @a: int[] pointer
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int left, right;
	int temp;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}

