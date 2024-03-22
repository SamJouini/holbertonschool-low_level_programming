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
	int j;
	void (*f)(va_list);
	char *separator = "";

	type_t format_list[] = {
		{'c', format_char},
		{'i', format_int},
		{'f', format_float},
		{'s', format_string}
	};

	va_start(arg_list, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == format_list[j].type)
			{
				printf("%s", separator);
				f = format_list[j].f;
				separator = ", ";
				(*f)(arg_list);
				break;
			}
			j++;
		}
		i++;
	}

	va_end(arg_list);
	printf("\n");
}
