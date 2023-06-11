#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program takes int arguments
 * @argc: num of arguments
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, num = 0;

	if (argc == 1)
		printf("%d\n", num);
	else if (argc == 2)
	{
		num = atoi(argv[1]);
		printf("%d\n", num);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(*argv[i])))
			{
				printf("Error\n");
				return (1);
			}

				num += atoi(argv[i]);
		}
		printf("%d\n", num);
	}
	return (0);
}
