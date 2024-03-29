#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in a list
 * @h: pointer to list
 *
 * Return: value
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
