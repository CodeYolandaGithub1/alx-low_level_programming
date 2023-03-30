#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be compared
 * @n: size of array
 * Return: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, z;

	for (i = 0; i < n--; i++)
	{
		z = a[i];
		a[i] = a[n];
		a[n] = z;
	}
}
