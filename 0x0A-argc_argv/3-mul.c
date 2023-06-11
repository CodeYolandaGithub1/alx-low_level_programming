#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print multiplies of two num
 * @argc: num of arguments
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, a;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = 1;

		for (i = 1; i < 3; i++)
			a *= atoi(argv[i]);
		printf("%d\n", a);
	}
	return (0);
}
