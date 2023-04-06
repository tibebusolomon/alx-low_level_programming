#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number that a square root to be calculated
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}
