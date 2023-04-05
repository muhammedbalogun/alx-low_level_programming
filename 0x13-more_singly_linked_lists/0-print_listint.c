#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that print elements of a list
 * @h: Pointer to list
 *
 * Return: value
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int i = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i);
}
