#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first string variable to concat
 * @src: second string variable to concat
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src);
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	int j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
