#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	long int a;
	long int b;
	long int temp;

	int iteration;

	a = 1;
	b = 1;

	for (iteration = 0; iteration < 49; iteration++)
	{
		printf("%ld, ", b);

		temp = b;
		b += a;
		a = temp;
	}

	printf("%ld\n", b);

	return (0);
}

