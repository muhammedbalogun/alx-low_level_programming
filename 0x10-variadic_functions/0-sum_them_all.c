#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - functn that returns the sum of all its paramters
 * @n: number of paramters
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
