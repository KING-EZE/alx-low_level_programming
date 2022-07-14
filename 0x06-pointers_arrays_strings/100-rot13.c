#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer string
 */

char *rot13(char *s)
{
	int n = 0, i;

	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + n) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + n) == letters[i])
			{
				*(s + n) = rot13[i];
				break;
			}
		}
		n++;
	}
	return (s);
}
