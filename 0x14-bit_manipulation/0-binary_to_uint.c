#include "main.h"
/**
 *binary_to_uint - convert binary to unsigned integer
 *@b: string of chars 0 or 1 to be converted
 *
 *Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		converted <<= 1;

		if (b[i] == '1')
			converted += 1;

		i++;
	}
	return (converted);
}
