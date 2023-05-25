#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print anything
 * @format: list argument types
 */
void print_all(const char * const format, ...)
{
	int n = 0;
	char *s, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					n++;
					continue;
			}
			sep = ", ";
			n++;
		}
	}
	printf("\n");
	va_end(list);
}
