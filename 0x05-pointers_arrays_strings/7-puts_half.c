#include "main.h"

/**
 * puts_half - prints the second half of the string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int z, n, y;

	z = 0;
	while (str[z] != '\0')
	{
		z++;
	}
		if (z % 2 == 0)
		{
			for (y = z / 2; str[y] != '\0'; y++)
			{
				_putchar(str[y]);
			}
		}
		else if (z % 2)
		{
			for (n = (z - 1) / 2; n < z - 1; n++)
			{
				_putchar(str[n + 1]);
			}
		}
		_putchar('\n');
}

