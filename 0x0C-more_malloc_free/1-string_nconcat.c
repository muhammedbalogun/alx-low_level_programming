#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: Null or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	else if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		n++;

	ptr = malloc(sizeof(char) * (n + 1));

	if (ptr == NULL)
		return (NULL);

	n = 0;

	for (i = 0; s1[i]; i++)
		ptr[i++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptr[n++] = s2[i];

	ptr[n] = '\0';

	return (ptr);
}
