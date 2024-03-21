#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 if sucess 1 or 2 if failed
*/

int main(int argc, char *argv[])
{
	int num_bytes;
	unsigned char *main_func;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_func = (unsigned char *)main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x ", main_func[i]);
	}
	printf("\n");

	return (0);
}
