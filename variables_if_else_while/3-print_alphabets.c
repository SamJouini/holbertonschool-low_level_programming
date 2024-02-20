#include <stdio.h>

/**
 * main - alphabet ALPHABET
 * return: 0
 */

int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z';)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A' ; uppercase <= 'Z';)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
