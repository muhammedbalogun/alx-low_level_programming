#include "function_pointers.h"
#include<stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to a function
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
