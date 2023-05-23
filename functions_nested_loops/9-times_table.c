#include "main.h"

/**
 * times_table - prints times table (nicely)
 * Return: void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int product = a * b;
			int lsd = product % 10;
			int msd = (product / 10) % 10;

			if (b != 0)
			{
				if (msd == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + msd);
				}
			}
			_putchar('0' + lsd);
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

