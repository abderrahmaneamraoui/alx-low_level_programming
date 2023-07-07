#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key in the hash table's array
 * @key: The key string
 * @size: The size of the array in the hash table
 *
 * Return: The index of the key in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Compute the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Calculate the index by performing modulo operation with the array size */
	return (hash_value % size);
}
