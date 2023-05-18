#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - function that reallocates memory block
 * @ptr: pointer previously allocated
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	char *op;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	np = malloc(new_size);
	if (!np)
		return (NULL);

	op = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			np[a] = op[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			np[a] = op[a];
	}

	free(ptr);
	return (np);
}
