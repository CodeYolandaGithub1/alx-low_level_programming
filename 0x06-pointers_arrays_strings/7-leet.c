#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @n: input value, vowels
 * Return: n value
 */
char *leet(char *n)
{
	int y, z;

	char v[] = "aAeEoOtTlL";
	char x[] = "4433007711";

	for (y = 0; n[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[y] == v[z])
			{
				n[y] = x[z];
			}
		}
	}
	return (n);
}
