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
	int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; J++)
		{
			if (*(accept + j) == *(s + i))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
