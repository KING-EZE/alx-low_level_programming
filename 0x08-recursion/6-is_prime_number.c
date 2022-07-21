#include "main.h"

/**
 * primeNum - determine if n is a prime number
 * @n: test case
 * @i: recurring factors
 * Description: determine if n is a prime number using 2 parameters
 * Return: 1 if n is a prime and zero if otherwise
 */

int primeNum(unsigned int n, unsigned int i)
{
	if (n % i == 0)
		return (0);
	else if (n >= (i + 1) * (i * 1))
		return (primeNum(n, i + 1));
	return (1);
}

/**
 * is_prime_number - determinr if n is a prime
 * @n: number to check
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (primeNum(n, 2));
}
