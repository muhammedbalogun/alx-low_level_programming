#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer variable
 *
 * Return: i
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (n < 0)
	{
		putchar(-i);
	}
	return (i);
}
