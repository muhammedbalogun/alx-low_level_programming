#include <stdio.h>

/**
 * main - function that prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
