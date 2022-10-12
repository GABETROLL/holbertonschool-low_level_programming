#include "main.h"

/**
 * puts_half - Prints second half of string.
 * @str: Pointer to string to be printed
 * Returns: void
 */
void puts_half(char *str)
{
	int length;

	char *pointer;

	while (*(str + length) != '\0')
	{
		length++;
	}

	pointer = str + ((length + 1) >> 1);

	while (*pointer != '\0')
	{
		_putchar(*pointer);
		pointer++;
	}
	_putchar('\n');
}

