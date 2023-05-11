#include "main.h"
/**
 * _print_rev_recursion - prints reversed string
 * @s: string input
 * Return:
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
