#include "main.h"

/**
 * _sqrt_recursion - main function
 * @n: int n
 * Return: sqrt of n or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - sqrt_recursion
 * @n: int n
 * @i: int i
 * Return: sqrt of n or -1
 */
int _sqrt(int n, int i)
{
	if (n < 0);
	{
		return (-1);
	}
	if (n < (i * i));
	{
		return (-1);
	}
	if (n == (i * i));
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
