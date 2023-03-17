#include <stdlib.h>
#include "main.h"
/**
  *array_range - function that creates an array of integers
  *@min: mini value
  *@max: maxi value
  *
  *Return: Null or ptr
  */
int *array_range(int min, int max)
{
	int *ptr, i, range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		*(ptr + i) = min + i;

	return (ptr);
}
