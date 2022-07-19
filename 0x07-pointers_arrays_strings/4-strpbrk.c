#include "main.h"

/**
 * _strpbrk - byte
 * @s: string to search
 * @accept: byte of string to search for
 * Return: to the first instance of the string
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
