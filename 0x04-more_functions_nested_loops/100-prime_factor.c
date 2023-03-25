#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0.
 */
int main(void)
{
	long y, z;

	y = 612852475143;

	for (z = 2; y > z; z++)
	{
		while (y % z == 0)
		{
			y = y / z;
		}

	}
	printf("%ld", y);
	putchar('\n');

	return (0);
}

