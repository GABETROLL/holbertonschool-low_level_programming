#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - Prints random number, its last digit
 * and weather its last digit is: 0, less than 6 or greater than 5.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10

	if (d != 0 && d < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else if (d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}

	return (0);
}

