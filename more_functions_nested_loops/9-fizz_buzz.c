#include "main.h"
#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if	(n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", n);
		}
		if (n!= 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
