#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to new created array
 */

int *array_range(int min, int max)
{
	int *a;
	int n, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	a = malloc(sizeof(int) * s);

	if (a == NULL)
		return (NULL);

	for (n = 0; min <= max; n++)
		a[n] = min++;

	return (a);
}
