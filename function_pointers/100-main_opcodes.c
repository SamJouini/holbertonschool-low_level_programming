#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * 
*/

int main(int argc, char *argv[]) 
{
	int num_bytes;
	unsigned char *main_func;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_func = (unsigned char *)main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%d", main_func[i]);
	}
	printf("\n");

	return (0);
}