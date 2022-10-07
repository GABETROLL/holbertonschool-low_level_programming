#include <stdio.h>
#include "main.h"

/**
 * main - FizzBuzz
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
		if (n % (3 * 5) == 0)
		{
			printf("FizzBuzz");
		}

		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", n);
		}


		printf(" ");
	}

	printf("Buzz\n");
	/* 100 -> 'Fizz' */

	return (0);
}

