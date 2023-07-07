#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the created hash table,
 *         or NULL if an error occurred
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;
	unsigned long int i;

	/* Allocate memory for the hash table structure */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		array[i] = NULL;

	/* Set the size and array of the hash table */
	ht->size = size;
	ht->array = array;

	return (ht);
}
