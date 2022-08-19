#include "main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: bit
 * @index: index of a bit
 * Return: value of bit at index, -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
