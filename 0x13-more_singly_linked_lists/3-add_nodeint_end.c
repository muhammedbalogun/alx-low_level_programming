#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to the address
 * @n: variable
 *
 * Return: address to new element or Null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *post1, *post2;

	post1 = malloc(sizeof(listint_t));
	if (post1 == NULL)
		return (NULL);

	post1->n = n;
	post1->next = NULL;

	if (*head == NULL)
	{
		*head = post1;
	}

	else
	{
		post2 = *head;
		while (post2->next != NULL)
			post2 = post2->next;
		post2->next = post1;
	}
	return (*head);
}
