#include "main.h"
/**
 * print_line - that draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 * followed by ia new line
 * Return: Always 0.
 */

void print_line(int n)
{
			int x;

			if (n > 0)
			{
				for (x = 1; x <= n; x++)
				{
					_putchar(95);
				}
			}
			_putchar('\n');
}
