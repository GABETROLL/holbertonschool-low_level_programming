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

		int hl;
		int hm;
		int ml;
		int mm;

		for (minute = 0; minute < 60; minute++)
		{
			hl = hour;
			hm = hour / 10;
			_putchar('0' + hm % 10);
			_putchar('0' + hl % 10);

			_putchar(':');

			ml = minute;
			mm = minute / 10;
			_putchar('0' + mm % 10);
			_putchar('0' + ml % 10);
			/*
			 * In order to print a digit's numbers one-by-one,
			 * we have to use the modulo and division operators.
			 *
			 * I'm storing the numbers divided by 10 in variables to
			 * display them most significant digit first.
			 * using mod 10 then dividing outputs digits least significant first.
			 */

			_putchar('\n');
			/* new line */
		}
	}
}

