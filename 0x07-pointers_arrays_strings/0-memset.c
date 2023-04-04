#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: starting address of memory to be filled
 * @b: second value
 * @n: the  number of bytes to be changed
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
