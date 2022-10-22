#include "hash_tables.h"

/**
 * hash_djb2 - hash function implemnting the djb2 algorithm.
 * @str: the string to hash
 *
 * Return: the calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int num;

	hash = 5381;
	while ((num = *str++))
		hash = ((hash << 5) + hash) + num; /* hash * 33 + num */

	return (hash);
}
