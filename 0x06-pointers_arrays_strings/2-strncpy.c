#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: input value
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}
