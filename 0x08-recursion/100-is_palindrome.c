#include "main.h"

int _strlen_recursion(char *s);
int palfind(char *s, int a, int z);

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to be checked
 * Return: 1 if string is a palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palfind(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - prints string length
 * @s: string to be measured
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palfind - check string for palindrome
 * @s: string to be checked
 * @a: iteration integer
 * @z: string length
 * Return: 1 if string is palindrome otherwise 0
 */

int palfind(char *s, int a, int z)
{
	if (*(s + a) != *(s + z - 1))
		return (0);
	if (a >= z)
		return (1);
	return (palfind(s, a + 1, z - 1));
}
