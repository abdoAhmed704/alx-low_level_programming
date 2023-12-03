#include "hash_tables.h"
/**
 * hash_table_print - Get the value
 *
 * @ht: the hash table
 *
 * Return: (void)
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current)
		{
			if (current->key != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
			}
			current = current->next;
			if (current != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
