#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: num input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		for (n <= 98; n++;)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (n <= 98; n--;)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf(", ");
			}
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
