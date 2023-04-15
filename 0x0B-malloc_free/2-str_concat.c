#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return:  length of string
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, si;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
		i = si = 0;

	while (s1[i] != '0')
	{
		i++;
	}
	while (s2[si] != '0')
		si++;

	conct = malloc(sizeof(char) * (i + si + 1));

	if (conct == NULL)
	{
		return (NULL);
	}
	i = si = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[si] != '\0')
	{
		conct[i] = s2[si];
		i++, si++;
	}
	conct[i] = '\0';
		return (conct);
}
