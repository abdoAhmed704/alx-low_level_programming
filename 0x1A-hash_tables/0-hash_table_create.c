#include "hash_tables.h"
/**
 * hash_table_create - creat a Hash Table
 *
 * @size: the size of the table
 *
 * Return: new table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
		new_table->array[idx] = NULL;
	return (new_table);
}
