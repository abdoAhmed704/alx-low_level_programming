#include "lists.h"

/**
 * get_dnodeint_at_index - get the node of a given index
 *
 * @head: pointer to the first node
 * @index: the index of the wanted node
 *
 * Return: the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	int flag = 0;/*not found*/

	while (head)
	{
		if (count == index)
		{
			flag = 1;
			break;
		}
		head = head->next;
		count++;
	}
	if (flag == 1)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
