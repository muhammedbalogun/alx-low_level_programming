#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars and intialize
 * @size: int variable
 * @c: char variable
 *
 * Return: Null or a
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	i = 0;
	while (i < size)
		a[i] = c;
		i++;
	return (a);
}
