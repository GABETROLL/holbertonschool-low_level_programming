#include "main.h"

/**
 * jack_bauer - Prints the longest day ever.
 * Return: void
 */
void jack_bauer(void)
{
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		int minute;

		int h;
		int m;

		for (minute = 0; minute < 60; minute++)
		{
			h = hour / 10;
			_putchar('0' + h % 10);
			h *= 10;
			_putchar('0' + h % 10);

			_putchar(':');

			m = minute / 10;
			_putchar('0' + m % 10);
			m *= 10;
			_putchar('0' + m % 10);
			/*
			 * In order to print a digit's numbers one-by-one,
			 * we have to use the modulo and division operators.
			 * 
			 * I'm dividing, then multipliying to display the digits
			 * in the correct order, most significant first.
			 * using mod 10 then dividing outputs digits least significant first.
			 */

			_putchar('\n');
			/* new line */
		}
	}
}

