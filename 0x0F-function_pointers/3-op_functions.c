#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - prints sum of two integers
 * @a: first number
 * @b: second number
 * Return: result of a plus b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - prints difference of two integers
 * @a: first number
 * @b: second number
 * Return: result of a minus b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - prints product of two numbers
	 * @a: first number
	 * @b: second number
	 * Return:  product of a times b
	 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - prints division of two numbers
 * @a: first number
 * @b: second number
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - prints the modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
