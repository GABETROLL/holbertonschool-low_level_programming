#include <stdio.h>

/**
 * main - Prints largest prime factor of 612852475143.
 * Return: 0 (Success)
 */
int main(void)
{
	long int factor;
	long int number;

	factor = 1000500;

	while (factor != 1)
	{
		number = factor;
		for (factor = number - 1; factor > 0; factor--)
		{
			printf("Factor: %ld\n", factor);
			if (number % factor == 0)
			{
				printf("Found: %ld in %ld\n", factor, number);
				break;
			}
		}
	}

	printf("%ld\n", number);

	return (0);
}

