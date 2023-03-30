#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int y, z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y] = '\0';
	return (dest);
}
