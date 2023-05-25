#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string between strings
 * @n: number of strings
 * @...: variable number of strings to be printed
 * Description: no print if seperator NULL
 *              print (nil) if one of strings if NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int index;
	
	va_start(str, n);
	
	for (index = 0; index < n; index++)
	{
		s = va_arg(str, char *);
		
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
