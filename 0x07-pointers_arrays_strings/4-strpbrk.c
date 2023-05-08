#include "main.h"
/**
 * *_strpbrk - locates first occurence
 * @s: string to be analysed
 * @accept: string with bytes to be analysed
 * Return: pointer to bytes in s that match accept
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			return (s);
		}
		s++;
	}
	return ('\0');
}
