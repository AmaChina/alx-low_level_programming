#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - Prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *opert;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	opert = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(opert) == NULL || opert[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opert == '/' && b == 0) || (*opert == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opert)(a, b));
	return (0);
}
