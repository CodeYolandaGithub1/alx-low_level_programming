#include <stdio.h>

/**
 * main - prints the num of arguments
 * @argc: num of arguments
 * @argv: array with arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
