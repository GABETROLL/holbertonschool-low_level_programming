#include "main.h"

/**
 * print_last_digit - Prints last digit of a number n.
 * @n: number
 * Return: Last digit of number n.
 */
int print_last_digit(int n)
{
	int answer = (n % 10);

	if (answer < 0)
	{
		answer *= (0 - 1);
	}
	/*
	 * modulo leaves negative sign for negative numbers;
	 * we don't want a negative ascii code.
	 */
	_putchar('0' + answer);
	return (answer);
}

