#include "main.h"
#include <stdlib.h>

/**
 * str_concat - ftn that concatenates two strings
 * @s1: first string variable
 * @s2: second string variable
 *
 * Return: Null or str
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		k++;

	c = malloc(sizeof(char) * k);

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		c[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		c[j++] = s2[i];

	return (c);
}
