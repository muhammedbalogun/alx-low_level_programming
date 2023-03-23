#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 * @array: array variable
 * @size: size of array
 * @action: pointer to function
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
