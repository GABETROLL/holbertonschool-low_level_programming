#include "main.h"

/**
 * print_times_table - prints times table,
 * from 0x0 up to (and including) nxn (nicely).
 * For example: If n were 5, this would be the printed output:
 * 0,   0,   0,   0,   0,   0
 * 0,   1,   2,   3,   4,   5
 * 0,   2,   4,   6,   8,  10
 * 0,   3,   6,   9,  12,  15
 * 0,   4,   8,  12,  16,  20
 * 0,   5,  10,  15,  20,  25
 *
 * (If the numbers are at the left-most column,
 * the number doesn't get padded with spaces)
 *
 * @n: greatest times table to display to from 0.
 * If n is greater than 15, function returns.
 * Return: void
 */
void print_times_table(int n)
{
	int a, b;

	if (n > 15 || n < 0)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int product = a * b;
			/* the max digits the product should have is 3. */
			int left_digit = product / 100;
			int middle_digit = (product / 10) % 10;
			int right_digit = product % 10;

			/* print digits */
			if (left_digit == 0)
			{
				if (b != 0)
					_putchar(' ');
			}
			else
				_putchar('0' + left_digit);
			if (middle_digit == 0 && left_digit == 0)
			{
				if (b != 0)
					_putchar(' ');
			}
			else
				_putchar('0' + middle_digit);
			_putchar('0' + right_digit);
			/* print separator or a new line */
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}

