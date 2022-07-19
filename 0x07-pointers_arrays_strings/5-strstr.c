#include "main.h"

/**
 * _strstr - find the first occurence of the substring.
 * needle in the string haystack
 * @haystack: the string to search
 * @needle: the string to find
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *pneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = pneedle;
		result++;
		haystack = result;
	}
	return (0);
}
