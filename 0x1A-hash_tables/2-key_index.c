#include "hash_tables.h"

/**
 * key_index - Gets the index at which a key/ value pair is stored
 * in the array of the hash table
 * @key: the key that gets the index
 * @size: the size of the array
 * Return: The index of the key
 *
 * Description: uses the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
