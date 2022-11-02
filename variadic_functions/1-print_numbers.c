#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints the first 'n' numbers in '...',
 * with the string in '*separator' in between.
 *
 * @separator: pointer to string to separate the ints in
 * '...', like this: 3, 4, 5 -> separator = "," .
 * @n: first numbers to print from '...'
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		/*
		 * We want to print the separator after every num
		 * except the last one, where we want to
		 * print a new line.
		 */
		if (i == n - 1)
		{
			printf("%d\n", va_arg(nums, int));
		}
		else
		{
			printf("%d%s", va_arg(nums, int), separator);
		}
	}
}

