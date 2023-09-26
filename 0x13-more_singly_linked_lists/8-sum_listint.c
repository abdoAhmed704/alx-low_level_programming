#include "lists.h"

/**
 * sum_listint - the total of all data
 * @head: pointer to first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while(head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
