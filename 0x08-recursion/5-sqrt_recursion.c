#include "main.h"

/**
 * _sqrt - find the square root of a number
 * @n: number to find sqrt
 * @i: root of n
 *
 * Return: 0
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - find sqrt recursively
 * @n: number to find sqrt
 *
 * Return: root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
