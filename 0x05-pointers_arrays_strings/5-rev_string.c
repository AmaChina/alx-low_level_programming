#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: string to be reversed
 * return: reversed string
 */

void rev_string(char *s)
{
	int r = 0, index = 0;
	char rev;

	while (s[index++])
	{
		r++;
	}
	for (index = r - 1; index >= r / 2; index--)
	{
		rev = s[index];
		s[index] = s[r - index - 1];
		s[r - index - 1] = rev;
	}
}
