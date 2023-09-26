#include "lists.h"

/**
 * pop_listint - pops
 * @head: douple pointer to first node
 *
 * Return: popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *nod;
	int n;

	if (!head || !*head)
		return (0);

	nod = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nod;
	return (n);
}
