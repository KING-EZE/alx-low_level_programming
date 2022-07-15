#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: the pointer dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c, d, e, f, add = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		d = a;
	else
		d = b;
	if (size_r <= d + 1)
		return (0);
	r[d + 1] = '\0';
	a--, b--, size_r--;
	e = *(n1 + a) - 48, f = *(n2 + b) - 48;
	while (d >= 0)
	{
		c = e + f + add;
		if (c >= 10)
			add = c / 10;
		else
			add = 0;
		if (c > 0)
			*(r + d) = (c % 10) + 48;
		else
			*(r + d) = '\0';
		if (a > 0)
			a--, e = *(n2 + b) - 48;
		else
			f = 0;
		d--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
