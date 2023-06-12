#include "main.h"
#include <stdlib.h>
/**
 * create_file - create file
 * @filename: name of file
 * @text_content: text content of file
 * Return: 1 for success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int desc, wb, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wb = write(desc, text_content, length);

	if (desc == -1 || wb == -1)
		return (-1);

	close(desc);

	return (1);
}
