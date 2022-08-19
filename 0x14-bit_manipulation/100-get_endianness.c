#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big-endian, 1 if small-endian
 */
int get_endianness(void)
{
	unsigned int count = 1;
	char *endian = (char *) &count;

	return ((int) *endian);
}
