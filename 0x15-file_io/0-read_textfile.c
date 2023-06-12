#include "main.h"
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
	ssize_t desc, wb, rb;
	char *stor;

	desc = open(filename, O_RDONLY);

	if desc == -1
		return(0);

	wb = write(STDOUT_FILENO, stor, rb);
	rb = read(desc, stor, letters);
	stor = malloc(sizeof(char) * letters);

	free(stor);
	close(desc);
	return (wb);
}
