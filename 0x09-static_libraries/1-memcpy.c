#include "main.h"
/**
 **_memcpy - copies the n bytes
 * @n: bytes in memory area
 * @src: source of memory area
 * @dest: destination of memory area
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
		dest[e] = src[e];

	return (dest);
}
