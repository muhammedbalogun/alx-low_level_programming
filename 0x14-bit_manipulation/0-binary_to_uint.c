#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: num or 0
 */

unsigned int binary_to_uint(const char *b)
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
