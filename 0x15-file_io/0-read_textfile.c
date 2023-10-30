#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- For reading text file print to STDOUT.
 * @filename: The text file being read.
 * @letters: Number of letters to be read.
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *pos;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	pos = malloc(sizeof(char) * letters);
	t = read(fd, pos, letters);
	w = write(STDOUT_FILENO, pos, t);

	free(pos);
	close(fd);
	return (w);
}
