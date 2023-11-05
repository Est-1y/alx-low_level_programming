#include "hash_tables.h"
/**
 * hash_table_get - function retrieving value associeted with key
 * @ht: pointer
 * @key: key
 * Return: value or NULL if key does not exit
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	current = ht->array[idx];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
