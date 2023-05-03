#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: string to be altered
 * return:
 */

void puts_half(char *str)
{
	int m = 0;
	int n;

	while (str[m] != '\0')
	{
		m++;
	}
	if (m % 2 == 1)
	{
		n = (m - 1) / 2;
		n += 1;
	}
	else
	{
		n = m / 2;
	}
	for (; n < m; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
