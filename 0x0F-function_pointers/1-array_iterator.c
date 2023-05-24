#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes function given
 * @array: array to be worked on
 * @size: array size
 * @action: pointer to needed function
 * Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u;

	if (array == NULL || action == NULL)
		return;

	for (u = 0; u < size; u++)
	{
		action(array[u]);
	}
}
