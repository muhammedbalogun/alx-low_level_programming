#include "main.h"

/**
 * swap_int - swap the values of input integers
 * @a: first integer variable
 * @b: second integer variable
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
