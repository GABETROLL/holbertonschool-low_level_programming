#include "main.h"

/**
 * print_triangle - Prints a size * size right triangle of '#' chars.
 * @size: size of triangle.
 * Return: void
 */
void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (y < x)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}

