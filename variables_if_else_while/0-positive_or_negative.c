#include <stdlib.h>
#include <time.h>
/**
 * main - Prints random number and weather it's positive, negative or zero
 * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (0 < n)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is 0\n", n);
	}

	return (0);
}
