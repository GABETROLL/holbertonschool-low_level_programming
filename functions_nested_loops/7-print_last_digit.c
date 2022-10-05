#include "main.h"

/**
 * print_last_digit - Prints last digit of a number n.
 * @n: number
 * Return: Last digit of number n.
 */
int print_last_digit(int n)
{
	int answer = (n % 10);
	_putchar('0' + answer);
	return (answer);
}

