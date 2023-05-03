#include "main.h"
#include <stdio.h>
/**
 * puts2 -  prints every other character of a string
 * @str: string to be altered
 * return:
 */

void puts2(char *str)
{
	int m;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	for (m = 0; m < n; m += 2)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
