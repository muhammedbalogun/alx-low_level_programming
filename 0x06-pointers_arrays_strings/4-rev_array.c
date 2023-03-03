#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of numbers
 * @n: length of array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
