#include "main.h"
#include  <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: size to be allocated
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);

	if (v == NULL)
		exit(98);

	return (v);
}
