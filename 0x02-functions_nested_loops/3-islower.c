#include "main.h"
/**
 *_islower - return 1 if char is lowercase
 *@c: character to be checked if lower case, type int.
 *Return: 1 if lower case, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
