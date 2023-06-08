#include "main.h"
/**
 * binary_to_uint - converts binary no to unsigned int
 * @b: pointer to 0 and 1 characters
 * Return: converted numbers or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int d = 0;

	if (b == NULL)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		d = 2 * d + (b[n] - '0');
	}
	return (d);
}
