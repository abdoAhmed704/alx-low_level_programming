#include "lists.h"
/**
 * dlistint_len - return the length of linked list
 *
 * @h: pointer to the first node
 *
 * Return: the length of linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
