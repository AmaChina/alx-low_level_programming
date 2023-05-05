#include "main.h"
#include <stdio.h>
/**
 * *rot13 - encodes a string using rot13
 * @a: pointer
 * Return: a
 */

char *rot13(char *a)
{
	int p;
	int q;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; a[p] != '\0'; p++)
	{
		for (q = 0; q < 52; q++)
		{
			if (a[p] == d1[q])
			{
				(a[p] = d2[q]);
				break;
			}
		}
	}
	return (a);
}
