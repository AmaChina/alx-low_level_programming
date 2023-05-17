#include "main.h"
#include <stdio.h>
/**
 * _strcpy -  copies the string pointed to by src
 * @src: value of source
 * @dest: value of destination
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
