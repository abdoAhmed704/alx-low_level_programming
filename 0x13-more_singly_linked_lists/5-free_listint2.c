#include "lists.h"

/**
 * free_listint2 - frees
 * @head: douple pointer to first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nod, *tmp;

	if (!head)
		return;

	nod = *head;
	while (nod)
	{
		tmp = nod;
		nod = nod->next;
		free(tmp);
	}
	*head = NULL;
}
