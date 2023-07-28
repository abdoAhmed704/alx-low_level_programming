#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: pointer to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *next_n;

	if (!head)
		return;

	node = head;
	while (node)
	{
		next_n = node->next;
		free(node->str);
		free(node);
		node = next_n;
	}
}
