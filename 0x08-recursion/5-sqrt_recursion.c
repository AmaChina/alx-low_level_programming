#include "main.h"

int true_sqrt_recursion(int n, int a);
/**
 * _sqrt_recursion - prints natural square root
 * @n: number to be analysed
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (true_sqrt_recursion(n, 0));
}

/**
 * true_sqrt_recursion - recurse to natural square root
 * @n: number to be calculated
 * @a: iteration value
 * Return: square root
 */

int true_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (true_sqrt_recursion(n, a + 1));
}
