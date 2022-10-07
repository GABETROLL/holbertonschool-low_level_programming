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
		for (n = '0'; n <= '9'; n++)
		{
			if (n != '2' && n != '4')
			{
				_putchar(n);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}

