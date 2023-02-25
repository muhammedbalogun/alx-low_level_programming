#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers for 0 to 9
 *
 * Return: 0
 */

void more_numbers(void)
{
	int d = 0;

	while (d <= 10)
	{
		int c;

		for (c = 0; c <= 14; c++)
		{
			_putchar(c + '0');
		}
		_putchar('\n');
		d++;
	}
	_putchar('\n');
}
