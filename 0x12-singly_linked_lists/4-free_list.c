#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
