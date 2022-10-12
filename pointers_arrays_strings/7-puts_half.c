#include "main.h"

/**
 * puts_half - Prints second half of string.
 * @str: Pointer to string to be printed
 * Returns: void
 */
void puts_half(char *str)
{
	int length = 0;
	int mid;

	while (str[length] != '\0')
	{
		length++;
	}

	mid = length / 2;

	while (str[mid] != '\0')
	{
		_putchar(str[mid]);
		mid++;
	}
	_putchar('\n');
}

