#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that print strings
 * @separator: The string separator
 * @n: number of parameters
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		str = va_arg(args, char *);
		printf("%s", (str == NULL) ? "(nil)" : str);
	}
	printf("\n");
	va_end(args);
}
