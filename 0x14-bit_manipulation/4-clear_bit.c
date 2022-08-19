#include "main.h"
/**
 * clear_bit - sets value of bit to a given index 0
 * @n: pointer of a bit
 * @index: index is the value of a bit set to 0
 * Return: 1 on success and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
