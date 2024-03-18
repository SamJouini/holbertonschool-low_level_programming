#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @f: function to call the name
 * @name: name to print
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
