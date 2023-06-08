#include "main.h"
/**
 * print_binary - prints binary rep on number
 * @n: number to be converted to binary
 * Return: binary rep of n
 */
void print_binary(unsigned long int n)
{
	int g;
	int tab = 0;
	unsigned long int newn;

	for (g = 63; g >= 0; g--)
	{
		newn = n >> g;

	if (newn & 1)
	{
		_putchar('1');
		tab++;
	}
	else if (tab)
		_putchar('0');
	}
	if (!tab)
		_putchar('0');
}
