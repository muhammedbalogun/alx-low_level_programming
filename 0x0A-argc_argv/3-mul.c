#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument supply
 * @argv: array of pointers to arguments
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;
	printf("%d\n", res);

	return (0);
}
