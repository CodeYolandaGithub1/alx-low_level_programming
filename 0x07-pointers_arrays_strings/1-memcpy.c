#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the address of memory to print
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory area with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
