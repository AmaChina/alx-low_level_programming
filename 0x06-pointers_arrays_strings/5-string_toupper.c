#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - change lowercase letters of string to upper case
 * @b: pointer of string
 * Return: b
 */

char *string_toupper(char *b)
{
	int c;

	c = 0;
	while (b[c] != '\0')
	{
		if (b[c] >= 'a' && b[c] <= 'z')
		{
			b[c] = b[c] - 32;
			c++;
		}
	}
	return (b);
}
