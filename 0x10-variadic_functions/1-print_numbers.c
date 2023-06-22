#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: char
 * @n: variable
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(va);
}
