#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - adding two diagonals of a square matrix of integers
 * @a: array use as matrix
 * @size: size of the square
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);

}
