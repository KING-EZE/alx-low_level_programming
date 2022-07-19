#include "main.h"

/**
 * _strspn - get lenght of a prefix substring
 * @s: string
 * @accept: bytes being compared
 * Description: finds number of bytes required to find accept in s
 * Return: bytes required to find accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1
		for (j = 0; *(accept + j) != '\0'; J++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
