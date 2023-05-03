#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns length of a string.
 * @s: string with lenth to be determined
 * return: length of @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);

}
