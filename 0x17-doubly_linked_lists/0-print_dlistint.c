#include "lists.h"
/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list.
 * @h: pointer to the first node
 *
 * Return: the length of linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
