#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs simple operations
 * @argc: number of the argument
 * @argv: array of arguments
 * Return: the result of the operation
 */


int main(int argc, char *argv[])
{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if (n2 == '0' && (op[0] == '%' || op[0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(op))(n1, n2));
	return (0);
}
