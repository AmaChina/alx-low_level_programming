#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - prints sum of all paramters
 * @n: number of paramters passed to function
 * @...: variable number of paramters to calculate
 * Return: If n == 0 - 0
 *         Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int t, tot = 0;

	va_start(ap, n);

	for (t = 0; t < n; t++)
		tot += va_arg(ap, int);
	va_end(ap);

	return (tot);
}
