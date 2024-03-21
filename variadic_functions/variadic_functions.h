#ifndef VARIADICFUNCTIONS_H
#define VARIADICFUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - used for the print all.c
 * @type: type de format
 * @f: function to call
*/
struct type
{
	char type;
	void (*f)(va_list);
};
typedef struct type type_t;

#endif
