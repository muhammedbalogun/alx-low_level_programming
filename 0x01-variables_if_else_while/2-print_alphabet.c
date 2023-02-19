#include <stdio.h>
#include <unistd.h>

/**
 * main - print alphabets in lowercase
 * followed by a line
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
