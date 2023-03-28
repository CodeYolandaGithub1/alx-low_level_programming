#include "main.h"
/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s: string to be printed
 * Return: String in reverse
 */
void print_rev(char *s)
{
	int z = 0;
	int y;

	while (*s != '\0')
	{
		z++;
		s++;
	}
	 s--;
	for (y = z; y > 0; y--)
	{
		_putchar(*s);
		 s--;
	}
	_putchar('\n');
}
