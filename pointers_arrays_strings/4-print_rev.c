#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @str: string of characters
 * Return: 0
 */


void print_rev(char *s)
{ 
	int len = strlen(s);


	char  *start = s; 
	char  *end = s + len - 1; 

	printf("teste");
	printf("len = %d", len);
/*	
	while (start < end)
	{ 
		char temp = *start; 
		*start = *end; 
		*end = temp; 
		start++; 
		end--; 
	}
*/
	_putchar(*s);
	_putchar('\n');       
} 
