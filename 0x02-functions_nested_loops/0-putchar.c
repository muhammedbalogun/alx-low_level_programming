#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(ch[c]);
	}
	_putchar('\n');
	return (0);
}
