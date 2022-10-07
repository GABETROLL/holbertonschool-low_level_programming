#include "main.h"

/**
 * more_numbers - Prints numbers [0, 14] ten times.
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int iteration;

	for (iteration = 0; iteration < 10; iteration++)
	{
		int msd;

		for (n = 0; n <= 14; n++)
		{
			msd = n / 10;
			if (msd != 0)
			{
				_putchar('0' + msd);
			}

			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}

