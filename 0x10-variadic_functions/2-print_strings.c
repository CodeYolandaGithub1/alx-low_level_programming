#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - entry
 * @separator: string
 * @n: num
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	char *sep;

		va_start(va, n);
	for (i = 0; i < n; i++)
	{
		sep = va_arg(va, char *);
		if (sep)
			printf("%s", sep);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(va);
}
