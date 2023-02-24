#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for number
 * @c: integer variable
 * Return: 1 if upper, 0 if lower
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
