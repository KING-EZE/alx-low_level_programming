#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print each number with separator, follwed by a newline
 * @separator: strings to be printed bewteen numbers
 * @n: number of arguments passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list op;

	va_start(op, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(op, int));
		if (separator != NULL && a != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(op);
}
