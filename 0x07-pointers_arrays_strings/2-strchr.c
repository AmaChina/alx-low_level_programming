#include "main.h"
#include <stddef.h>
/**
 * *_strchr - finds a character in a string
 * @c: the character to be found
 * @s: the string to be searched
 * Return: a pointer to c if found otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int e;

	for (e = 0; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
		return (s + e);
	}
	return (NULL);
}
