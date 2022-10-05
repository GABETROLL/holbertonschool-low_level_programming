#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times.
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int iteration;

	for (iteration = 0; iteration < 10; iteration++)
	{
		int letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		
		_putchar('\n');
	}
}

