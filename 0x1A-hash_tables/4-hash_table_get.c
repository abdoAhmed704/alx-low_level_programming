#include "hash_tables.h"

/**
 * hash_table_get - Get the value
 *
 * @ht: the hash table
 * @key: the given key
 *
 * Return: the value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;


	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);

}
