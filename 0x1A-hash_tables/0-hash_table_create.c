#include "hash_tables.h"

/**
 * hash_table_create - This function will create a hash table
 * @size: size for the table/array to be.
 *
 * Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int idx = 0;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (idx < size)
		table->array[idx++] = NULL;
	return (table);
}
