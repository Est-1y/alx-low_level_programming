#include "hash_tables.h"

/**
 * hash_table_create - this creates a hash table
 * @size: size of the array
 * Return:  pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_hashtable;

	if (size <= 0)
		return (NULL);

	new_hashtable = malloc(sizeof(hash_table_t));
	if (!new_hashtable)
		return (NULL);

	new_hashtable->size = size;
	new_hashtable->array = malloc(size * sizeof(hash_node_t *));
	if (!new_hashtable->array)
	{
		free(new_hashtable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_hashtable->array[i] = NULL;
	return (new_hashtable);
}
