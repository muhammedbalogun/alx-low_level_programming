#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers for 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
