#include "main.h"
/**
 * _strlen_recursion - the lenght of a sting
 * @s: pointer of string to be printed
 * Return: the lenght of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(++s));
}

