#include "hash_tables.h"

/**
 * hash_table_set - setting the key and value
 *
 * @key: the key
 * @value: the value
 * @ht: the hash Tables
 *
 * Return: (1) if ok and (0) if not
 *
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL ||
		ht->array == NULL || ht->size == 0 || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->key);
			current->key = strdup(key);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
