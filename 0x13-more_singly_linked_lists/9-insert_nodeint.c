#include "lists.h"

/**
 * insert_nodeint_at_index - get new node
 * @head: douple pointer to first node
 * @idx: index
 * @n: value new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nod, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	nod = *head;
	while (nod)
	{
		if (i == idx - 1)
		{
			new_node->next = nod->next;
			nod->next = new_node;
			return (new_node);
		}
		i++;
		nod = nod->next;
	}
	free(new_node);
	return (NULL);
}
