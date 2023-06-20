#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: pointer to a char name
 * @age: float variable
 * @owner: pointer to a char owner
 *
 * Return: pointer to a new dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner, i;
	dog_t *d_new;

	d_new = (dog_t *)malloc(sizeof(dog_t));
	if (d_new == NULL)
	{
		return (NULL);
	}
	len_name = 0;
	len_owner = 0;
	while (name[len_name++])
		;
	while (owner[len_owner++])
		;

	d_new->name = malloc(len_name * sizeof(d_new->name));
	if (d_new->name == NULL)
	{
		free(d_new);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
	{
		d_new->name[i] = name[i];
	}
	d_new->age = age;
	d_new->owner = malloc(len_owner * sizeof(d_new->owner));
	if (d_new->owner == NULL)
	{
		free(d_new->name);
		free(d_new);
		return (NULL);
	}
	for (i = 0; i <= len_owner; i++)
		d_new->owner[i] = owner[i];
	return (d_new);
}
