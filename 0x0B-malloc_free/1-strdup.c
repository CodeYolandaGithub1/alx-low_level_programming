#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *a;
	int i, s = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		a[s] = str[s];

	return (a);
}
