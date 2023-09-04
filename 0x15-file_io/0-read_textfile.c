#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its content to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The maximum number of characters to read and print.
 *
 * Return: V- actual number of bytes read and printed,
 *	0 if the function fails or if the filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t v;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	v = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (v);
}
