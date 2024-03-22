#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * format_char- print a character
 * @arg: argument list
 */

void format_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * format_int- print an integer
 * @arg: argument list
 */

void format_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * format_float- print a float
 * @arg: argument list
 */

void format_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * format_string- print a string
 * @arg: argument list
 */
void format_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - function that print anything
 * @format:list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list arg_list;
	int i = 0;
	char *separator = "";

	va_start(arg_list, format);

	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i++])
		{
			case 'c':
			{
				printf("%s", separator);
				format_char(arg_list);
				break;
			}
			case 'i':
			{
				printf("%s", separator);
				format_int(arg_list);
				break;
			}
			case 'f':
			{
				printf("%s", separator);
				format_float(arg_list);
				break;
			}
			case 's':
			{
				printf("%s", separator);
				format_string(arg_list);
				break;
			}
		}
		separator = ", ";
	}

	va_end(arg_list);
	printf("\n");
}
