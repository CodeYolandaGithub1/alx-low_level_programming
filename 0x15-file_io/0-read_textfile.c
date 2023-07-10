#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: read
 * @letters: num
 * 
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tex;
	ssize_t tx;
	ssize_t ex;
	ssize_t t;

	tx = open(filename, O_RDONLY);
	if (tx == -1)
		return (0);
	tex = malloc(sizeof(char) * letters);
	t = read(tx, tex, letters);
	ex = write(STDOUT_FILENO, tex, t);

	free(tex);
	close(tx);
	return (ex);
}
