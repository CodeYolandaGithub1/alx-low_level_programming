#include "main.h"

/**
 * clear_bit - value
 * @n: num
 * @index: index
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
