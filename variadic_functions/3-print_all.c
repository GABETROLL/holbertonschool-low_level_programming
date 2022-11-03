#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/*
 * YES, WE CAN GET THE NEXT ARGUMENT IN ANOTHER FUNCTION,
 * since the function 'va_arg' just moves a pointer
 * to the next part of its allocated memory,
 * which we're free to pass around in different functions.
 *
 * and also have to free when we're done
 */

/**
 * print_char - Prints char in 'items' argument list
 * @items: va_list ready to "yield" char
 * Return: nothing
 */
void print_char(va_list items)
{
	printf("%c", (char)va_arg(items, int));
}

/**
 * print_int - Prints int in 'items' argument list
 * @items: va_list ready to "yield" int
 * Return: nothing
 */
void print_int(va_list items)
{
	printf("%d", va_arg(items, int));
}

/**
 * print_float - Prints float in 'items' argument list
 * @items: va_list ready to "yield" float
 * Return: nothing
 */
void print_float(va_list items)
{
	printf("%f", (float)va_arg(items, double));
}

/**
 * print_string - Prints string pointed to by
 * pointer in 'items' argument list
 * @items: va_list ready to "yield" char pointer
 * Return: nothing
 */
void print_string(va_list items)
{
	printf("%s", va_arg(items, char *));
}

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

	char format_chars[] = "cifs";
	void (*print_functions[])(va_list) = {&print_char, &print_int, &print_float, &print_string, NULL};

	int format_i;
	int format_len = strlen(format);

	va_start(items, format);

	/* Look at every type format in the 'format' parameter */
	format_i = 0;
	while (format && format_i < format_len)
	{
		int format_char_i = 0;

		while (format_chars[format_char_i])
		{
			/* and match it with its corresponding print format function. */
			if (format_chars[format_char_i] == format[format_i])
			{
				print_functions[format_char_i](items);

				if (format_i < format_len - 1)
				{
					printf(", ");
				}
				break;
			}
			format_char_i++;
		}
		format_i++;
	}

	printf("\n");

	va_end(items);
	/* free memory */
}

