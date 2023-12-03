#include "hash_tables.h"

/**
 * shash_table_create - create  hash table.
 * @size: number of array
 *
 * Return: hash table created, or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int idx;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
		new_table->array[idx] = NULL;
	return (new_table);
}
/**
 * set_spair - mallo
 * @key: the key
 * @value: the value
 *
 * Return: pointer to the new node.
 */
shash_node_t *set_spair(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (!new_node)
		return (NULL);
	new_node->key = malloc(strlen(key) + 1);
	if (!new_node->key)
		return (NULL);
	new_node->value = malloc(strlen(value) + 1);
	if (!new_node->value)
		return (NULL);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	return (new_node);
}

/**
 * set_spair_only - qqqqqqqq
 * @ht:  hash table.
 * @key: the key
 * @value: the value
 * @index: index.
 *
 * Return: the node or NULL
 */
shash_node_t *set_sp_only(shash_table_t *ht, const char *key,
			     const char *value, unsigned long int index)
{
	shash_node_t *new_node = set_spair(key, value);

	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	ht->array[index] = new_node;
	return (new_node);
}

/**
 * update_value - update
 * @node: the node.
 * @value: the value
 *
 * Return: 1 on success, 0 on fail.
 */
int update_the_value(shash_node_t *node, const char *value)
{
	if (strcmp(node->value, value) == 0)
		return (1);
	free(node->value);
	node->value = malloc(strlen(value) + 1);
	if (!node->value)
		return (0);
	strcpy(node->value, value);
	return (1);
}

/**
 * set_front - sets key value
 * @ht: hash table.
 * @key: the key
 * @value: the value
 * @index: index.
 *
 * Return: new node or NULL
 */
shash_node_t *set_front(shash_table_t *ht, const char *key,
			     const char *value, unsigned long int index)
{
	shash_node_t *new_node = set_spair(key, value);

	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (new_node);
}

/**
 * slist_set_first - AAa
 * @ht: hash table.
 * @node: hash table.
 *
 * Return: Always 1.
 */
int slist_first(shash_table_t *ht, shash_node_t *node)
{
	node->sprev = NULL;
	node->snext = NULL;
	ht->shead = node;
	ht->stail = node;
	return (1);
}

/**
 * slist_set - se.
 * @ht: hash table.
 * @old_node: the node t
 * @node: the new node to place in front of the old one.
 *
 * Return: Always 1 (success).
 */
int slist_set(shash_table_t *ht, shash_node_t *the_old_node,
		shash_node_t *node)
{
	if (the_old_node->sprev == NULL)
		ht->shead = node;
	node->snext = the_old_node;
	node->sprev = the_old_node->sprev;
	the_old_node->sprev = node;
	if (node->sprev != NULL)
		node->sprev->snext = node;
	return (1);
}

/**
 * slist_set_end - s list
 * @ht: hash table.
 * @node: thend.
 *
 * Return: 1.
 */
int slist_end(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *the_old_node = ht->stail;

	ht->stail = node;
	node->snext = NULL;
	node->sprev = the_old_node;
	the_old_node->snext = node;
	return (1);
}

/**
 * shash_table_set - adds or
 * @ht: hash table.
 * @key: the key
 * @value: the value
 *
 * Return: 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
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

/**
 * shash_table_get - get
 * @ht: a poin
 * @key: the key.
 *
 * Return: the val.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
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

/**
 * shash_table_print - print.
 * @ht: the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
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

/**
 * shash_table_print_rev - everse.
 * @ht: hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node = ht->stail;

	if (ht == NULL)
		return;
	printf("{");
	while (node != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		count++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes
 * @ht: ht
 */
void shash_table_delete(shash_table_t *ht)
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
