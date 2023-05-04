#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 * Return:
 */

void reverse_array(int *a, int n)
{
	int p;
	int q;

	for (p = 0; p < n--; p++)
	{
		q = a[p];
		a[p] = a[n];
		a[n] = q;
	}
}
