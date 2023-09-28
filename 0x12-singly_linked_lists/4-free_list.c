#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: pointer to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	int count;

	if (!head)
		return;
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
