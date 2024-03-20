#include "variadic_functions.h"
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
	int j;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(para, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(para,int);
		sum += j;
	}

	va_end(para);

	return (sum);
}
