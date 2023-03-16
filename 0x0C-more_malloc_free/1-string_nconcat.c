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
	unsigned int i, j = n;

	if (s1 == NULL)
		s1 = "";

	else if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		j++;

	ptr = malloc(sizeof(char) * (j + 1));

	if (ptr == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++)
		ptr[j++] = s1[i];

	for (i = 0; s2[i] && i < j; i++)
		ptr[j++] = s2[i];

	ptr[j] = '\0';

	return (ptr);
}
