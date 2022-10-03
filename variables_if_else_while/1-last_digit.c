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
	
	if (n < 6)
	{
		printf("The last digit of %d is and is less than 6 and not 0", n);
	}
	else if (n > 5)
	{
		printf("The last digit of %d is and is greater than 5", n);
	}
	else
	{
		printf("The last digit of %d is and is 0", n);
	}

	return (0);
}

