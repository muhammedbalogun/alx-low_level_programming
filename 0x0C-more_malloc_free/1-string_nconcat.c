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
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	else if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		j++;

	ptr = malloc(sizeof(char) * (i + n + 1));

	if (ptr == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (i = 0; s2[j] && j < n; i++; j++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
