#include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: string point
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string
 * @s: string
 * @x: smallest iterator
 * @y: biggest iterator
 * Return: void
 */

int comparator(char *s, unsigned int x, unsigned int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + comparator(s, x + 1, y - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a sting is a palidrome
 * @s: string
 * Return: 1 if s is a panlidrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
