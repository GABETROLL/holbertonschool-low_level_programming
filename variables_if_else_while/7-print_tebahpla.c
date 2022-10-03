#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse then newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 122; letter > 96; letter--)
	{
		putchar(letter);
	}

	putchar(10);
	/* new line */

	return (0);
}

