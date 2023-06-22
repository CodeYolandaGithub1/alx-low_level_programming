#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of variadic
 * @n: input
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list va;

	if (n == 0)
		return (0);

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(va, int);
	}
	va_end(va);
	return (sum);
}
