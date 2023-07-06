#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: num
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int i, dec = 0;

	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
			dec++;
		}
		else if (dec)
			_putchar('0');
	}
	if (!dec)
		_putchar('0');
}
