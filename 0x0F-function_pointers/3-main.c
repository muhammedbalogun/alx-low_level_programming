#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - perfroms simple arithmetics
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, output;
	char c;
	int (*opts)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	opts = get_op_func(argv[2]);

	if (!opts)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	output = opts(arg1, arg2);

	printf("%d\n", output);

	return (0);
}
