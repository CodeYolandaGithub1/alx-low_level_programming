#include "main.h"

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
/**
 * _sqrt_recursion - return natural square
 * @n: int
 *
 * Return: On success 1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
