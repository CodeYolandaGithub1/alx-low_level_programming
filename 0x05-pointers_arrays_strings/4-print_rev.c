#include "main.h"
/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s: string to be printed
 * Return: 0.
 */
void print_rev(char *s)
{
	int y, z;

	y = 0;

	while (*s != '\0')
	{
		y++;
	}
	for (z = y; z > 0; z--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
