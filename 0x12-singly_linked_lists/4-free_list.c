#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next_node;

	if (!head)
		return;

	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
