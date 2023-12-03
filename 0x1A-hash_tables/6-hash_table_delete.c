#include "hash_tables.h"
/**
 * hash_table_delete - Delete the hash table
 *
 * @ht: the hash table
 *
 * Return: (void)
 *
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *temp;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current)
		{
			temp = current;
			free(current->key);
			free(current->value);
			free(temp);
			current = current->next;
		}
	}
	free(ht->array);
	free(ht);
}
