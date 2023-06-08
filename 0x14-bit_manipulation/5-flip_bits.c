#include "main.h"
/**
 * flip_bits - prints number of bits to flip
 * @n: number one
 * @m: number two
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int tab = 0;
	unsigned long int spec = n ^ m;

	for (; spec != 0; tab++)
	{
		spec &= (spec - 1);
	}
	return (tab);
}
