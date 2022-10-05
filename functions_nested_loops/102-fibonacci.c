#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int temp;

	int iteration;

	a = 1;
	b = 1;

	for (iteration = 0; iteration < 49; iteration++)
	{
		printf("%d, ", b);

		temp = b;
		b += a;
		a = temp;
	}

	printf("%d\n", b);

	return (0);
}

