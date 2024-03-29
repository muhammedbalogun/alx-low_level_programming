#include "main.h"

/**
 * factorial - function that returns factorial of number
 * @n: number to find its factorial
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
