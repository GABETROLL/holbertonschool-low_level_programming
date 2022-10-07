#include "main.h"

/**
 * print_triangle - Prints a size * size right triangle of '#' chars.
 * @size: size of triangle.
 * Return: void
 */
void print_triangle(int size)
{
	int lines, spaces, pounds;

	for (lines = 1; lines <= size; lines++)
	{
		for (spaces = size - lines; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (pounds = 1; pounds <= lines; pounds++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}

