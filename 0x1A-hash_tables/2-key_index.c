#include "hash_tables.h"

/**
 * key_index - Computes the index for a key in a hash table.
 * @key: The key to be hashed.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key should be stored in the array.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
