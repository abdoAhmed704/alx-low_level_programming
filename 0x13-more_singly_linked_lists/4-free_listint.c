#include "lists.h"

/**
 * free_listint - frees
 * @head: pointer to first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nod;

	while (head)
	{
		nod = head;
		head = head->next;
		free(nod);
	}
}
