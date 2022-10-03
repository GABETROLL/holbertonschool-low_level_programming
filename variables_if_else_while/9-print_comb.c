#include <stdio.h>

/**
 * main - print all digits separated by commas
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 57; digit++)
	{
		putchar(digit);
		/* bytes [48,58) represent digits. */
		putchar(44);
		/* ',' */
		putchar(32);
		/* space */
	}

	putchar(57);
	/* '9' */

	putchar(10);
	/* new line */

	return (0);
}

