#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - addition of numbers
 * @a: number 1
 * @b: number 2
 * Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of numbers
 * @a: number 1
 * @b: number 2
 * Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of numbers
 * @a: number 1
 * @b: number 2
 * Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - division of numbers
 * @a: number 1
 * @b: number 2
 * Return: the result of the division of a by b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of numbers
 * @a: number 1
 * @b: number 2
 * Return: the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
