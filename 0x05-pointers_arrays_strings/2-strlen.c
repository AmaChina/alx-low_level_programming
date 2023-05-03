#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @s: string with length to be checked
 * return: length of @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
