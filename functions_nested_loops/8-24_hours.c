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

		for (minute = 0; minute < 60; minute++)
		{
			int h = hour;

			_putchar(h % 10);
			h %= 10;
			_putchar(h % 10);

			_putchar(':');

			int m = minute;

			_putchar(m % 10);
			m %= 10;
			_putchar(m % 10);
		}
	}
}

