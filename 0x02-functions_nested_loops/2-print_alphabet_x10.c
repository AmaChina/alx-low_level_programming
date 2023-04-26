#include "main.h"
/**
 * main - entry point
 * Description: print lowercase alphabet x10
 * Return:
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
