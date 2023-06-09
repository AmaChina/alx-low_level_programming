#include "main.h"
/**
 * _pow_recursion - return x raised to the power y
 * @x: number
 * @y: power raised to
 * Return: value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
