#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_string - print a string followed by a newline
 * @separator: string to be printed
 * @n: number of strings to be passed to function
 * Return: void
 */
void print_string(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ip;
	char *s;

	va_start(ip, n);

	for (j = 0; j < n; j++)
	{
		s = va_arg(ip, char *);
		if (s != NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ip);
}
