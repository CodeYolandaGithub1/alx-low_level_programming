#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: first value -char
 * @accept: second value
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int y = 0, z = 0;
	unsigned int n = 0;

	while (s[z] != ' ' && s[z] != '\0')
	{
		while (accept[y] != '\0')
		{
			if (s[z] == accept[y])
				n++;
			y++;
		}
		z++;
		y = 0;
	}
	return (n);
}
