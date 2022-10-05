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
			h = hour;

			_putchar('0' + h % 10);
			h %= 10;
			_putchar('0' + h % 10);

			_putchar(':');

			m = minute;

			_putchar('0' + m % 10);
			m %= 10;
			_putchar('0' + m % 10);
		}
	}
}

