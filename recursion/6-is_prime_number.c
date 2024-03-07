#include "main.h"

/**
 * is_prime_number_test - check if number is prime
 * @n: number
 * @base: number used as a test
 * Return: 1 if prime or 0 is not
 */

int is_prime_number_test(int n, int base)
{

	if (base <= 1)
	{
		return (0);
	}
	
	if (n * n > base)
	{
		return (1);
	}
	
	if (base % n == 0)
	{
		return (0);
	}
	
	return (is_prime_number_test(n + 1, base));
}


/**
 * is_prime_number - check if a number is prime
 * @n: number
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)

{
	return (is_prime_number_test(2, n));
}
