#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to new allocated space otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[c])
		c++;
	if (n >= c)
		d = a + c;
	else
		d = a + n;
	x = malloc(sizeof(char) * d + 1);
	if (x == NULL)
		return (NULL);
	c = 0;

	while (b < d)
	{
		if (b <= a)
			x[b] = s1[b];
		if (b >= a)
		{
			x[b] = s2[c];
			c++;
		}
		b++;
	}
	x[b] = '\0';
	return (x);
}
