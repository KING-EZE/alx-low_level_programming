#include "main.h"

/**
 * swap_int - swap tyhe values of two integers
 * @a: first value
 * @b: second value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
