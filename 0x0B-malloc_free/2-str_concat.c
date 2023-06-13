#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * s1: input one 
 * s2: input two
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, cc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = cc = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[cc] != '\0')
		cc++;
	c = malloc(sizeof(char) * (i + cc + 1));

	if (c == NULL)
		return (NULL);
	i = cc = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	while (s2[cc] != '\0')
	{
		c[i] = s2[cc];
		i++, cc++;
	}
	c[i] = '\0';
	return (c);
}
