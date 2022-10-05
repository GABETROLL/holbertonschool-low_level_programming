#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int num;
	int sum;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}

