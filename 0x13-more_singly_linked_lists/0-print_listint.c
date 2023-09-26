#include "lists.h"

/**
 * print_listint - printing linked_list
 * @h: first node
 *
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
