#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the new hash table, or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array = NULL;
	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	array = calloc(size, sizeof(hash_node_t *));
	if (!array)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}
