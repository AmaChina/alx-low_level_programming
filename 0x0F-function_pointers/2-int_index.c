#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index -  searches for integer
 * @array: array to work on
 * @size: elements size
 * @cmp: pointer to funtions
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
