#include <stdio.h>

/**
 * main - Prints largest prime factor of 612852475143.
 * Return: 0 (Success)
 */
int main(void)
{ 
	long int factor;
	long int number;
	factor = 612852475143;

	while (factor != 1)
	{
		number = factor;
		for (factor = number - 1; factor > 0; factor--)
		{
			if (number % factor == 0)
			{
				break;
			}
		}
	}

	printf("%ld\n", number);

	return (0);
}

