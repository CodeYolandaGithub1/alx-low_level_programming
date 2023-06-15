#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: input
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
