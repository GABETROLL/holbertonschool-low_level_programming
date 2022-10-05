#include "main.h"

/**
 * print_times_table - prints times table up to n (nicely)
 * @n: greatest times table to display to from 0.
 * If n is greater than 15, function returns.
 * Return: void
 */
void print_times_table(int n)
{
	int a;
	int b;
	int product;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (a = 0; a <= n; a++)
	{
		int msd;
		int md;
		int lsd;

		for (b = 0; b <= n; b++)
		{
			product = a * b;
			lsd = product % 10;
			md = (product / 10) % 10;
			msd = product / 100;

			if (product == 0 || product / 10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
			}

			else if (product / 100 == 0)
			{
				_putchar(' ');
				_putchar('0' + md);
			}
			else
			{
				_putchar('0' + msd);
				_putchar('0' + md);
			}
			_putchar('0' + lsd);

			if (b < n)
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

