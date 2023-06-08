#include "main.h"

/**
 * is_prime_number - function that check prime numbers
 * @n: number to be checked
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, n-1));
}

/**
 * is_prime - check if a number is prime through recursion
 * @n: number to be checked
 * @i: divisor
 *
 * Return: 0 or 1
 */

int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (is_prime(n, i-1));
}
