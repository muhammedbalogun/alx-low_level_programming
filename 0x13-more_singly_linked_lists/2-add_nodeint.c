#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: address of the first node of the list
 * @n: int variable
 *
 * Return: address of new node
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
