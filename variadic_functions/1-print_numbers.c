#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/* I don't think I need this library... */

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
		printf("%d", va_arg(nums, int));
		/*
		 * We want to print the separator after every num
		 * except the last one, where we want to
		 * print a new line.
		 */
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

