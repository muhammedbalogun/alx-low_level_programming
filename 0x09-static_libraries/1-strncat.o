#include "main.h"

/**
 * _strncat - function that concatenate two string
 * @dest: first string variable
 * @src: second string variable
 * @n: integer variable
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}

	i = 0;
	while (src[i] && i < n)
	{
		dest[dest_len++] = src[i];
		i++;
	}
	return (dest);
}
