#include "hash_tables.h"
/**
 * hash_table_print - prints as a dictionary
 *
 * @ht: the hash table
 *
 * Return: (void)
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *the_next;

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
			for (i = index + 1; i < ht->size; i++)
			{
				the_next = ht->array[i];
				if (the_next != NULL)
				{
					printf(", ");
					break;
				}
			}
		}
	}
	printf("}\n");
}
