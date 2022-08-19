#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 * Return: the unsigned int binary number with a decimal value, or 0 if Error
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int count;

	count = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		count <<= 1;
		if (b[i] == '1')
			count += 1;
	}
	return (count);
}
