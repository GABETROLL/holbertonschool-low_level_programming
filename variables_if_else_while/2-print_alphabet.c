#include <stdio.h>

/**
 * main - prints alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}

