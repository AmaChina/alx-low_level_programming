#include "main.h"
/**
 * *_memset -  fills the first n bytes of the memory area
 * @n: bytes of the memory area
 * @s: points to memory area
 * @b: constant byte
 * Return: pointer to the memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
		s[e] = b;
	return (s);
}
