#include "main.h"

/**
 * _puts - prints the string
 * @str: input string to print
 * Description: prints the string to stdout
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
