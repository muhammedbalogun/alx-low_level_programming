#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the multiplication of two numbers
 * @argc: argument supply
 * @argv: array of pointers to arguments
 *
 * Return: product
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error: supply two numbers as argument\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	return (n1 * n2);
}
