#include "main.h"

/**
 * times_table - prints times table (nicely)
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int product;

	int msd;
	int lsd;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			product = a * b;

			lsd = product % 10;
			msd = (product / 10) % 10;

			if (msd != 0)
			{
				_putchar('0' + msd);
			}
			/* Leading 0 digits aren't so nice. */

			_putchar('0' + lsd);
			/*
			 * Displaying numbers as base 10 using modulo and division operators.
			 * There are a max of 2 digits, highest is 81.
			 */

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

