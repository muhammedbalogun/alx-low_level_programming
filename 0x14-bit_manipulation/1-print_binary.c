#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that print binary rep. of a number
 * @n: number variable
 *
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		num <<= 1;
		num += b[i] - '0';
	}
	return (num);
}
