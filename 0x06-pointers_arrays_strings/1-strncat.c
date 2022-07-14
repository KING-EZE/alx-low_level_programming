#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: sources
 * @n: amount of bytes used for src
 * Return: the pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count, count1;

	count = 0;
	count1 = 0;
	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count1 < n)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
