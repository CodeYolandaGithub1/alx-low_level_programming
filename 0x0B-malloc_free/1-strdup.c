#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string to duplicate
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, z;

	i = 0;
	z = 0;

	if (str == NULL)
		return (NULL);

	while (str[z])
		z++;

	duplicate = malloc(sizeof(char) * (z + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
