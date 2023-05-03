#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * return:
 */

void swap_int(int *a, int *b)
/* a function to swap the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
