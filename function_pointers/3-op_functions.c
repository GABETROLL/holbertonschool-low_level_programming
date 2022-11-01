#include "3-calc.h"

/**
 * op_add - Returns the sum of 'a' and 'b'.
 * @a: int to add
 * @b: int to add
 * Return: sum of 'a' and 'b'
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between 'a' and 'b'.
 * @a: int to subtract from
 * @b: int to subtract from a
 * Return: the difference between 'a' and 'b'
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of 'a' and 'b'.
 * @a: int to multiply
 * @b: int to multiply
 * Return: product of 'a' and 'b'
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the quotient of 'a' and 'b'
 * @a: dividend
 * @b: divisor
 * Return: the quotient of 'a' and 'b'
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_add - Returns the remainder of 'a / b'.
 * @a: dividend
 * @b: divisor
 * Return: remainder of 'a / b'
 */
int op_mod(int a, int b)
{
	return (a % b);
}

