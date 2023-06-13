#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: of input
 * @height: of inputs
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **w;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	w = malloc(sizeof(int *) * height);

	if (w == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		w[x] = malloc(sizeof(int) * width);

		if (w[x] == NULL)
		{
			for (; x >= 0; x--)
				free(w[x]);

			free(w);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			w[x][y] = 0;
	}
	return (w);
}
