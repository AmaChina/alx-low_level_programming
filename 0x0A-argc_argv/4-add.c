#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argv: argument vector
 * @argc: argument count
 * Return: result of addition else 0 else 1 for error
 */

int main(int argc, char *argv[])
{
	int a;
	unsigned int u, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			c = argv[a];

			for (u = 0; u < strlen(c); u++)
			{
				if (c[u] < 48 || c[u] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
