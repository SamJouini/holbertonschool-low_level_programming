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
	char *str;
	str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - function that print anything
 * @format:list of types of arguments passed to the function
 * print_all("ceis", 'B', 3, "stSchool")
*/

void print_all(const char * const format, ...)
{
	va_list arg_list;
	int i = 0;
	int j = 0;
	void (*f)(va_list);

type_t type_list[] = {
	{'c', format_char},
	{'i', format_int},
	{'f', format_float},
	{'s', format_string},
};

	va_start(arg_list, format);

	while (format[i] != '\0')
	{
		va_arg(arg_list, int);
	
		while (j < 4)
		{
			if (format[i] == type_list[j].type)
			{
				f = type_list[j].f;
			}
			j++;
		}
		(*f)(arg_list);
		i++;
	}

	va_end(arg_list);
	printf("\n");
}
