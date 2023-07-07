#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: The hash table
 * @key: The key string
 *
 * Return: The value associated with the key,
 *         or NULL if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp_node;

	/* Check if the hash table and key exist */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get theindex of the key in the array */
	index = key_index((unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the index */
	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		/* If the key is found, return the value */
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}

	return (NULL);
}
