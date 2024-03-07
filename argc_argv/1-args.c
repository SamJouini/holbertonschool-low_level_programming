#include <stdio.h>

/**
 * main - prints the number of argument in argv
 * @argc: number in the command line
 * @argv: array of argc's lenght
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
