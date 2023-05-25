#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers
 * @separator: string between numbers
 * @n: number of integers passed
 * @...: variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list dig;
	unsigned int index;

	va_start(dig, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(dig, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(dig);
}
