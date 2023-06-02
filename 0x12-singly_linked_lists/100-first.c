#include <stdio.h>

/**
 * fxno - function executed before main
 * Return:
 */

void __attribute__ ((constructor)) fxno()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
