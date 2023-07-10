#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: terminated string to write to the file
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, fl = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (fl = 0; text_content[fl];)
			fl++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, fl);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
