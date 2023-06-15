#include <stdlib.h>
#include "main.h"

/**
 * array_range - the entry
 * @min: input
 * @max: input
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int x, y;
	int *z;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	z = malloc(sizeof(int) * y);
	if (z == NULL)
		return (NULL);
	for (x = 0; x < y; x++)
	{
		z[x] = min++;
	}
	return (z);
}
