#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop
 * @head: search
 *
 * Return: address of a loop returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (node_ptr = head; node_ptr != end; node_ptr = node_ptr->next)
			if (node_ptr == end->next)
				return (end->next);
	}

	return (NULL);
}
