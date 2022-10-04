#include <main.h>

/**
 * print_alphabet - Prints alphabet.
 * Return: void
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	putchar('\n');
	/* new line */
}

/**
 * main - Prints alphabet then exits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

