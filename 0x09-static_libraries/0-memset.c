#include "main.h"

/**
 * _memset - fills n bytes
 * @s: pointer to the chair parameters
 * @b: data to chnage
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
