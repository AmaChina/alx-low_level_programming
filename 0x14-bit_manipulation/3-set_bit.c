#include "main.h"
/**
 * set_bit - sets bit value to 1 at index
 * @n: nuber to be assessed
 * @index: point where bit is to be set
 * Return: 1 for success and -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
