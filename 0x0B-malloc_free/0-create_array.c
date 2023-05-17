#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array and initialize with char c
 * @size: array size
 * @c: character to work with
 * Return: pointer to array otherwise NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;

	return (str);
}
