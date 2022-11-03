#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_format - print next item from 'items'
 * using the 'format' format.
 *
 * @format:
 * c for char,
 * i for integer,
 * f for float,
 * s for string
 *
 * Any other format won't print, and will return 0,
 * otherwise 1.
 *
 * If the string is NULL, print "(nil)" and also
 * return 1.
 *
 * @items: va_list
 *
 * Return: 1 if the format was valid or a string, otherwise 0
 */
int print_format(const char format, va_list items)
{
	char *s;

	switch (format)
	{
		case 'c':
			printf("%c", (char)va_arg(items, int));
			return (1);
		case 'i':
			printf("%d", va_arg(items, int));
			return (1);
		case 'f':
			printf("%f", (float)va_arg(items, double));
			return (1);
		case 's':
			s = va_arg(items, char *);
			if (s == NULL)
			{
				printf("(nil)");
				return (1);
			}
			printf("%s", s);
			return (1);
		default:
			return (0);
	}
}

/**
 * print_all - Prints all items in '...' as
 * types in 'format'.
 *
 * Read the current format in 'format' and print the next
 * item in '...' if the format is valid, otherwise
 * move to the next format and repeat this process again
 *
 * @format: data type to treat items in '...'
 * like:
 * c: char
 * i: integer
 * f: float
 * s: char * (if string is NULL, print (nil)
 * instead)
 * Any other type is ignored.
 *
 * THE TYPE MUST CORRESPOND WITH THE FORMAT
 * OTHERWISE SEGFAULT IS POSSIBLE
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list items;

	int format_i;
	int format_len;

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	format_len = strlen(format);
	va_start(items, format);

	/* Look at every type format in the 'format' parameter */
	format_i = 0;
	while (format_i < format_len)
	{
		/* and match it to its corresponding printing format */
		if (print_format(format[format_i], items) && format_i < format_len - 1)
		{
			/*
			 * making sure we print only ONE ", " after every item except
			 * the last. If the format was invalid, we ignore it,
			 * and therefore not print it or the ", " that would come after it.
			 */
			printf(", ");
		}

		format_i++;
	}

	printf("\n");

	va_end(items);
	/* free memory */
}

