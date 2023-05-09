#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the addition of the two diagonals
 * @a: array
 * @size: size input
 * Return:
 */

void print_diagsums(int *a, int size)
{
	int m;
	int n;
	int o = 0;
	int p = 0;

	for (m = 0; m <= (size * size); m = m + size + 1)
		o = o + a[m];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		p = p + a[n];
	printf("%d, %d\n", o, p);
}
