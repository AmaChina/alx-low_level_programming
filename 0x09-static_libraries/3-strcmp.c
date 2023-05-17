#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer <, =, >  0 if s1 <, =, > s2
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
