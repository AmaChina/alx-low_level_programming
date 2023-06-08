#include "main.h"
/**
 * get_bit - prints value of bit
 * @n: number to be assessed
 * @index: pointer to index of bit
 * Return: value of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valbit;

	if (index > 63)
		return (-1);
	valbit = (n >> index) & 1;
	return (valbit);
}
