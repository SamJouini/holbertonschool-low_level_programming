#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - addition of n parameters
 * @n: number of parameters
 * Return: result of the addition
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(para, n);

	for (i = 0, sum = 0; i < n; i++)
	{
		sum += va_arg(para, int);
	}
	va_end(para);
	return (sum);
}
