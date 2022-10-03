#include <stdio.h>

/**
 * main - print all digits separated by commas
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		/* bytes [48,58) represent digits. */

		if (digit != 57)
		{

			putchar(44);
			/* ',' */
			putchar(32);
			/* space */
		}
	}

	putchar(10);
	/* new line */

	return (0);
}

