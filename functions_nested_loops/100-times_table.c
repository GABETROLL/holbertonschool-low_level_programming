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
	int msd;
	int lsd;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			product = a * b;
			lsd = product % 10;
			msd = (product / 10) % 10;

			if (msd == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + msd);
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

