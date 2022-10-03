#include <stdio.h>

/**
 * main - Prints alphabet in lowercase, then in uppercase, then new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		putchar(letter);
	}

	for (letter = 65; letter < 91; letter++)
	{
		putchar(letter);
	}

	putchar(10);
	/* new line */

	return (0);
}
