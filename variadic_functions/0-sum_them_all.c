#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of the
 * first 'n' ints of an 'infinite' amount
 * of arguments.
 *
 * @n: number of ints to sum from '...'
 * Return: Sum of all nums in '...'
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	/* pointer to list of arguments */
	unsigned int index;
	int sum;

	sum = 0;
	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(nums, int);
		/*
		 * va_arg automatically iterates through
		 * all the arguments for you,
		 * so you don't need to use
		 * the 'index' varialbe,
		 * other than to count
		 * the amount of ints being added.
		 */
	}

	va_end(nums);

	return (sum);
}

