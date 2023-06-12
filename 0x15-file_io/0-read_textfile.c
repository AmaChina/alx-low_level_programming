#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - reads text file
 * @filename: name of file
 * @letters: letters in text
 * Return: number or readable and printable
 * letters, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
