#include "function_pointers.h"
#include <stdio.h>

/**
 * arrray_iterator - prints each array element
 * @array: to iterate
 * @size: of how many elements to print
 * @action: this a function pointer.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
