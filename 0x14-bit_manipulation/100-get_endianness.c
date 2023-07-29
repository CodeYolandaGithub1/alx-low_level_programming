#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: Always 0.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
