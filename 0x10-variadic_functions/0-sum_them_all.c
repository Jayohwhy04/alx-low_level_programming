#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all parameters
 * @n: the number of parameters passed to the function
 * @...: A variable number of parameters to calculate the sum of
 *
 * Return: if n == 0 - 0
 * otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int f, sum = 0;

	va_start(ap, n);

	for (f = 0; f < n; f++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
