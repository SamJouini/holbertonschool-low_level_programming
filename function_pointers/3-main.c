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
	int n1, n2;
	char *op;
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	op = argv[2];
	if ((op[0] == '%' || op[0] == '/') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (*f)(n1, n2);
	printf("%d\n", result);
	return (0);
}
