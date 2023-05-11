#include "main.h"
/**
 * _strlen_recursion - return string length
 * @s: string
 * Return: x string length
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
