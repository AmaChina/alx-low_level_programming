#include "main.h"
/**
 * clear_bit - sets bit value to 0
 * @n: number to assess
 * @index: point at which to clear bit
 * Return: 1 for success and -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
