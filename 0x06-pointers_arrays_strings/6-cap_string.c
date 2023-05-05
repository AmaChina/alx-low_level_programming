#include "main.h"
#include <stdio.h>
/**
 * *cap_string - capitalizes all words of a string
 * @str: string to be capitalised
 * Return: capitalised str
 */

char *cap_string(char *str)
{
	int x = 0;

		while (str[x] != '\0')
		{
			if (str[x] >= 97 && str[x] <= 122)
			{
				str[x] = str[x] - 32;
			}
		if (str[x] == ' ' ||
			str[x] == '\t' ||
			str[x] == '\n' ||
			str[x] == ',' ||
			str[x] == ';' ||
			str[x] == '.' ||
			str[x] == '!' ||
			str[x] == '?' ||
			str[x] == '"' ||
			str[x] == '(' ||
			str[x] == ')' ||
			str[x] == '{' ||
			str[x] == '}' ||
			x == 0)
		{
			if (str[x + 1] >= 97 && str[x + 1] <= 122)
			{
				str[x + 1] = str[x + 1] - 32;
			}
		}
		str++;
		}
	return (str);
}
