#include "lists.h"
/**
 * sum_dlistint - the sum of all list data
 *
 * @head: pointer to the first node
 *
 * Return: the sum (int)
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
