#include "lists.h"

/**
 * reverse_listint - reverses
 * @head: douple pointer to first node
 *
 * Return: the address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nod = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	nod = *head;
	*head = NULL;
	while (nod)
	{
		next = nod->next;
		nod->next = *head;
		*head = nod;
		nod = next;
	}
	return (*head);
}
