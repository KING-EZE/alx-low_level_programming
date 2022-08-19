#include "main.h"
/**
 * flip_bits - returns of bits needed to be flipped
 * to get from one number to another
 * @n: number to be flipped
 * @m: number that n is to be flipped to
 * Return: numbers of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned long int num = 0;

	while (flipped > 0)
	{
		num += (flipped & 1);
		flipped >>= 1;
	}
	return (num);
}
