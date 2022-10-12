#include "main.h"

/**
 * puts2 - Prints every even character of string
 * @str: Pointer to string to be printed
 * Returns: void
 */
void puts2(char *str)
{
	char *pointer = str;
	char *last = str;

	while (*last != '\0')
	{
		last++;
	}

	while (pointer < last)
	{
		_putchar(*pointer);
		pointer += 2;
	}
	_putchar('\n');
}

