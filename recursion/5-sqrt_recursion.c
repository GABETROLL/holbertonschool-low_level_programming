#include "main.h"
/**
 * find_square_root - Calculates natural square root of n.
 * If root is the square root of n, it returns root.
 * If it's not, it tries root + 1 in a new function call.
 * 
 * If root * root goes past the result, return -1,
 * since n is not a perfect square.
 *
 * @root: Guess of what the square root is, please use 0.
 * @n: number t ofind the square root of
 *
 * Return: square root of n if n is a perfect square above 0, else -1
 */
int find_square_root(int root, int n)
{
	int perfect_square = root * root;

	if (perfect_square < n)
	{
		return find_square_root(root + 1, n);
	}
	else if (perfect_square > n)
	{
		return (-1);
	}
	return (root);
}

/**
 * _sqrt_recursion - Calculates square root of perfect square.
 * @n: number to get square root of
 * Return: square root of n if n is a perfect square, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	return (find_square_root(0, n));
}

