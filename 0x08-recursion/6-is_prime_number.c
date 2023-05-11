#include "main.h"

int true_primenum(int n, int a);
/**
 * is_prime_number - print whether prime number or not
 * @n: number to be analysed
 * Return: 1 if prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (true_primenum(n, n - 1));
}

/**
 * true_primenum - print if number is prime
 * @n: number to be analysed
 * @a: iteration integer
 * Return: 1 if prime number otherwise 0
 */

int true_primenum(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (true_primenum(n, a - 1));
}
