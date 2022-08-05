#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra parameter
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list op;
	int sum = 0;

	va_start(op, n);

	for (i = 0; i < n; i++)
		sum += va_arg(op, int);
	va_end(op);
	if (n == 0)
		return (0);
	return (sum);
}
