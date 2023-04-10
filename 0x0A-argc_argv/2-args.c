#include "main.h"
#include <stdio.h>

/**
 * main -  arguments should be printed, including the first one
 * print one argument per line, ending with a new line
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
