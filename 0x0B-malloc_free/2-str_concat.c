#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: merged strings otherwise NULL
 */

char *str_concat(char *s1, char *s2)

{
	char *m;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	m = malloc(sizeof(char) * (a + b + 1));

	if (m == NULL)
		return (NULL);
	a = b = 0;

	while (s1[a] != '\0')
	{
		m[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		m[a] = s2[b];
		a++, b++;
	}
	m[a] = '\0';
	return (m);
}
