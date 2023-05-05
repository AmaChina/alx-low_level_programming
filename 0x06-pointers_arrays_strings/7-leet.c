#include "main.h"
#include <stdio.h>
/**
 * *leet - encodes a string into 1337
 * @a: input
 * Return: a
 */

char *leet(char *a)
{
	int p, q;
	char m[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (p = 0; a[p] != '\0'; p++)
	{
		for (q = 0; q < 10; q++)
		{
			if (a[p] == m[q])
			{
				(a[p] = n[q]);
			}
		}
	}
	return (a);
}
