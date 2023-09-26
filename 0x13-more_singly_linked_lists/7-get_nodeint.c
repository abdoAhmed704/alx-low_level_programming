#include "lists.h"

/**
 * get_nodeint_at_index - returns node
 * @head: pointer of first node
 * @index: index
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nod;
	unsigned int n;

	for (nod = head, n = 0; nod && n < index; node = nod->next, n++)
		;
	return (nod);
}
