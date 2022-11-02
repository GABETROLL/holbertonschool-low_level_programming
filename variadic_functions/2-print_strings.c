#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints the first 'n' strings
 * pointed to in '...',
 * with the string in '*separator' in between.
 *
 * @separator: pointer to string to separate the strings
 * in '...', like this: 
 * hello, hi, im string -> separator = "," .
 * @n: first strings to print from '...'
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strings, char *));
		/*
		 * We want to print the separator after every
		 * string except the last one, where we want to
		 * print a new line.
		 */
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

