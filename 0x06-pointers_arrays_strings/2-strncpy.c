#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - copies string
 * @src: source string
 * @dest: destination string
 * @n: input integert
 * Return: destination value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
