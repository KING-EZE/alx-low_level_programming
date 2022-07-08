#include "main.h"
#include <stdio.h>

/**
 * main - find prime number
 * Description: The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
 * Return: 0
 */

int main(void)
{
	long int x = 612852475143;

	long int i;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
			x = x / i;
	}
	printf("%ld\n", i);
	return (0);
}
