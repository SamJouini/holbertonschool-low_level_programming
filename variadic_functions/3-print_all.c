#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that print anything
 * @format:list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
			separator = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
			separator = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
			separator = ", ";
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", separator, str);
			separator = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
