#include "main.h"

/**
 * _sqrt_recursion - return natural square root of num
 * @n: num for square root
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt2(n, 0));
}

/**
 * sqrt2 - find natural square
 * @n: num to calculate square
 * @m: num to iterate
 *
 * Return: Always 0.
 */
int sqrt2(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (sqrt2(n, m + 1));
}
