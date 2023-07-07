#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - Creates a new hash node
 * @key: The key string
 * @value: The value string
 *
 * Return: A pointer to the new hash node,
 *         or NULL if an error occurred
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	/* Copy the key string */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Copy the value string */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	/* Set the next pointer to NULL */
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key string
 * @value: The value string
 *
 * Return: 1 if the operation succeeded, or 0 if an error occurred
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp_node;

	/* Check if the hash table, key, and value exist */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Get the index of the key in the array */
	index = key_index((unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the index */
	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		/* If the key already exists, update the value and return */
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			if (temp_node->value == NULL)
				return (0);
			return (1);
		}
		temp_node = temp_node->next;
	}

	/* Create a new node */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	/* Insert the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
