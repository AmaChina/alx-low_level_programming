#include "main.h"
/**
 * _strspn - acquires the length of the prefix substring
 * @s: string to be assessed
 * @accept: where to assess number of bytes
 * Return: number of bytes (s) from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}

			else if (accept[b + 1] == '\0')
			return (a);
		}
		s++;
	}
	return (a);
}
