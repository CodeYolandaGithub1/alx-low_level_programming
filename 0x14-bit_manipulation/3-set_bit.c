#include "main.h"

/**
 * set_bit - sets bit
 * @n: pointer
 * @index: index
 *
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
