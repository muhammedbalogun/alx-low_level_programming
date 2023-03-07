#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to search
 * @needle: substring to locate
 *
 * Return: haystack or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			for (; haystack[i] == needle[i]; i++)
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
			}
		}
		haystack++;
	}
	return ('\0');
}
