#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number in the command line
 * @argv: array of argc's lenght
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
