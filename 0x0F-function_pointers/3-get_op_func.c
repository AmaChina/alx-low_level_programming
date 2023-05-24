#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - choose correct function for op
 * @s: operator
 * Return: pointer to function for op
 */

int (*get_op_func(char *s))(int, int)
{
	op_t opert[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int n = 0;

	while (opert[n].op != NULL && *(opert[n].op) != *s)
		n++;

	return (opert[n].f);
}
