nclude "main.h"

/**
 * print_alphabet - print alphabet from a to z
 *
 * Return: 0.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar (ch);

	}
	_putchar ('\n');
}
