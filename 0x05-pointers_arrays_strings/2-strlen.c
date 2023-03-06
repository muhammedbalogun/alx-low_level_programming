#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: string variable
 *
 * Return: len
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
