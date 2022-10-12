#include "main.h"

/**
 * puts_half - Prints second half of string.
 * @str: Pointer to string to be printed
 * Returns: void
 */
void puts_half(char *str)
{
	int length;
	
	char *start = str;
	char *pointer;

	while (*(str + length) != '\0')
	{
		length++;
	}

	pointer = start + ((length + 1) >> 1);

	while (*pointer != '\0')
	{
		_putchar(*pointer);
	}
	_putchar('\n');
}

