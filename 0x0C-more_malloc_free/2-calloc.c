#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: num
 * @size: of memory
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = malloc(nmemb * size);
	if (z == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		z[x] = 0;
	return (z);
}
