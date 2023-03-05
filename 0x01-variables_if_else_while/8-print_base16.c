#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
