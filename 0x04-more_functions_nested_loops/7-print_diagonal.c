#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * followed by a new line
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int n;

	if (n <= 0)
	{
		_putchar('\n');
		}
	else
	{
		int y, z;

		for (y = 0; y < n; i++)
		{
			for (z = 0; z < n; j++)
			{
				if (z == i)
					_putchar('\\');
				else if (z < x)
					_putchar(' ');
			}
				_putchar('\n');
		}
	}
}
