#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: number in the command line
 * @argv: array of argc's lenght
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
