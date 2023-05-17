#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int a, b, c, l, m, n;

	a = 0;
	b = 0;
	c = 0;
	l = 0;
	m = 0;
	n = 0;

	while (s[l] != '\0')
		l++;
	while (a < l && m == 0)
	{
		if (s[a] == '-')
		b++;

		if (s[a] >= '0' && s[a] <= '9')
		{
			n = s[a] - '0';

			if (b % 2)
			n = -n;
			c = c * 10 + n;
			m = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
			break;

			m = 0;
		}
		a++;
	}
	if (m == 0)
	return (0);

	return (c);
}


/**
 * main - multiplies two numbers
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 otherwise 1 for Error
 */

int main(int argc, char *argv[])
{
	int r, p, q;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	p = _atoi(argv[1]);
	q = _atoi(argv[2]);
	r = p * q;

	printf("%d\n", r);
	return (0);
}
