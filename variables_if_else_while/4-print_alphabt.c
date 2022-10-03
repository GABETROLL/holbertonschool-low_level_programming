#include <stdio.h>

/**
 * main - print all letters of the alphabet in loewrcase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
	}

	putchar(10);

	return (0);
}

