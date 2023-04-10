#include "main.h"
#include <stdio.h>

/**
 * main - program should print a number, followed by a new line
 *  @argv: array of arguments
 *  @argc: number of arguments
 *  Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
		printf("%d\n", argc - 1);

		return (0);
}
