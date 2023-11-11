#include "lists.h"

/**
 * free_dlistint - frees the list
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		free(node);
		head = head->next;
	}
}
