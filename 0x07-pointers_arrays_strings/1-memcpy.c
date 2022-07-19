#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: memory destination
 * @src: memory source
 * @n: byte to copy to dest
 * Description: copy n byte
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}
