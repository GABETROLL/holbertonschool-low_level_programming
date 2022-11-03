#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - Prints all items in '...' as
 * types in 'format'.
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
	int format_len = strlen(format);

	while (format == NULL)
	{
		return;
	}

	va_start(items, format);

	/* Look at every type format in the 'format' parameter */
	format_i = 0;
	while (format && format_i < format_len)
	{
		char *s;

		/* and match it to its corresponding printing function */
		switch (format[format_i])
		{
			case 'c':
				printf("%c", (char)va_arg(items, int));
				break;
			case 'i':
				printf("%d", va_arg(items, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(items, double));
				break;
			case 's':
				s = va_arg(items, char *);

				if (s == NULL)
				{
					printf("(nil)");
					break;
				}

				printf("%s", s);
				break;
		}

		if (format_i < format_len - 1)
		{
			printf(", ");
		}

		format_i++;
	}

	printf("\n");

	va_end(items);
	/* free memory */
}

