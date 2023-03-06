#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers for 0 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		int b, c;

		for (c = 0; c <= 14; c++)
		{
			b = c;
			if (c > 9)
			{
				_putchar('1');
				b = c % 10;
			}
			_putchar('0' + b);
		}
		_putchar('\n');
		a++;
	}
}
