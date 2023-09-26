#include "lists.h"

/**
 * add_nodeint_end - >>>>>
 * @head: >>>>>>>
 * @n: >>>>>
 *
 * Return: pointer new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *nod;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		nod = *head;
		while (nod->next)
			nod = nod->next;
		nod->next = new_node;
	}
	return (new_node);
}
