#include "main.h"
/**
 * rev_string - Write a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to be reversed
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int z;

	while (s[counter] != '\0')
		counter++;
	for (z = 0; z < counter; z++)
	{
		counter--;
		rev = s[z];
		s[z] = s[counter];
		s[counter] = rev;
	}
}
