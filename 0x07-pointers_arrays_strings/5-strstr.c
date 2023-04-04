#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: substring
 * @needle: string
 *
 * Return:  pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *y = haystack;
		char *z = needle;

		while(*y == *z && *z != '\0')
		{
			y++;
			z++;
		}

		if (*z == '\0')
			return (haystack);
	}
	return (0);
}
