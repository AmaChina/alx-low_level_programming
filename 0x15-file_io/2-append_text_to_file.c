#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - adds text to end of file
 * @filename: name of file
 * @text_content: text content of file
 * Return: 1 for success and -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int length, wb, a = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	wb = write(a, text_content, length);

	if (a == -1 || wb == -1)
		return (-1);
	close(a);

	return (1);
}
