#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at an index
 * @n: nunber variable
 * @index: index to return
 *
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	value = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
