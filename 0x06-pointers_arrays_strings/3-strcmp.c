#include "main.h"

/**
 * _strcmp - compare 2 string values
 * @s1: string to be compared
 * @s2: string value to be compared
 * Return: Difference between 2 string values
 */
int _strcmp(char *s1, char *s2)
{
	int y;

	y = 0;
	while (s1[y] != '\0' && s2[y] != '\0')
	{
		if (s1[y] != s2[y])
		{
			return (s1[y] - s2[y]);
		}
		y++;
	}
	return (0);
}

