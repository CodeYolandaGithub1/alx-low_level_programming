#include "main.h"

/**
 * prime2 - check for prime num
 * @i: same as n
 * @p: num that iterates
 *
 * Return: Always 0.
 */
int prime2(int i, int p)
{
	if (i == p)
		return (1);
	else if (i % p == 0)
		return (0);
	return (prime2(i, p + 1));
}
/**
 * is_prime_number - check if prime
 * @n: int
 *
 * Return: On success 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
