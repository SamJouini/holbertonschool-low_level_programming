#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that print strings
 * @separator: string printed between strings
 * @n: strings passed to the function
 * Return: printed strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = (va_arg(arg, char *));

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
