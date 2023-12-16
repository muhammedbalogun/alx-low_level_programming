#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that print binary rep. of a number
 * @n: number variable
 *
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;

	if (n == 0)
		return (0);

	num = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (num > 0)
	{
		if (n & num)
			_putchar('0');
		else
			_putchar('0');
		num >>= 1;
	}
	return (num);
}
