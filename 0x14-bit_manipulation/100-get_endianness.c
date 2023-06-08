#include "main.h"
/**
 * get_endianness - prints endianness
 * Return: 0 for big endian, 1 for small
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *k = (char *) &n;

	return (*k);
}
