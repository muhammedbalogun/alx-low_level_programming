#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string variable
 *
 * Return: str
 */

char *leet(char *str)
{
	int i, j, k;

	char l[] = "OoLlEeAaTt";
	char m[] = "0011334477";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (str[i] == l[j])
				k = j;
				str[i] = m[k];
		}
		j++;
	}
	return (str);
}
