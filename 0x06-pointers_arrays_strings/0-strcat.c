#include "main.h"
#include <stdio.h>
/**
 * *_strcat - appends the src string to the dest string
 * @src: source string
 * @dest: destination string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
